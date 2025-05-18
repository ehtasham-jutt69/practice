#include <iostream>
#include <queue>
using namespace std;

const int MAX_NFA_STATES = 10;
const int MAX_DFA_STATES = 100;
const int MAX_SYMBOLS = 10;

int nfa[MAX_NFA_STATES][MAX_SYMBOLS][MAX_NFA_STATES];
int nfaCount[MAX_NFA_STATES][MAX_SYMBOLS];

int nfaStates, nfaSymbols;
char symbols[MAX_SYMBOLS];

// DFA states store sets of NFA states
int dfaStates[MAX_DFA_STATES][MAX_NFA_STATES];
int dfaStatesSize[MAX_DFA_STATES];
int dfaTransitions[MAX_DFA_STATES][MAX_SYMBOLS];
int totalDfaStates = 0;

// Compare  dono sets ki 
bool equalSets(int a[], int sizeA, int b[], int sizeB) {
    if (sizeA != sizeB) return false;
    for (int i = 0; i < sizeA; i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

// Find DFA state index matching a given set; return -1 if not found
int findDfaState(int setArr[], int size) {
    for (int i = 0; i < totalDfaStates; i++) {
        if (equalSets(dfaStates[i], dfaStatesSize[i], setArr, size)) {
            return i;
        }
    }
    return -1;
}

// Sort set array (simple bubble sort)
void sortSet(int arr[], int size) {
    for (int i = 0; i < size-1; i++)
        for (int j = 0; j < size-1-i; j++)
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

void convertToDFA() {
    // Initialize DFA with start state {0}
    dfaStatesSize[0] = 1;
    dfaStates[0][0] = 0;
    totalDfaStates = 1;

    // Initialize all DFA transitions to -1 (no transition)
    for (int i = 0; i < MAX_DFA_STATES; i++)
        for (int j = 0; j < MAX_SYMBOLS; j++)
            dfaTransitions[i][j] = -1;

    queue<int> q;
    q.push(0);

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int sym = 0; sym < nfaSymbols; sym++) {
            int nextSet[MAX_NFA_STATES];
            int nextSetSize = 0;

            // For each NFA state in current DFA state
            for (int i = 0; i < dfaStatesSize[current]; i++) {
                int nfaState = dfaStates[current][i];
                // Add all reachable states on symbol sym
                for (int k = 0; k < nfaCount[nfaState][sym]; k++) {
                    int ns = nfa[nfaState][sym][k];
                    // Avoid duplicates
                    bool exists = false;
                    for (int m = 0; m < nextSetSize; m++) {
                        if (nextSet[m] == ns) {
                            exists = true;
                            break;
                        }
                    }
                    if (!exists) {
                        nextSet[nextSetSize++] = ns;
                    }
                }
            }

            if (nextSetSize == 0) {
                dfaTransitions[current][sym] = -1;
                continue;
            }

            sortSet(nextSet, nextSetSize);

            int idx = findDfaState(nextSet, nextSetSize);
            if (idx == -1) {
                idx = totalDfaStates;
                for (int i = 0; i < nextSetSize; i++)
                    dfaStates[idx][i] = nextSet[i];
                dfaStatesSize[idx] = nextSetSize;
                totalDfaStates++;
                q.push(idx);
            }

            dfaTransitions[current][sym] = idx;
        }
    }
}

void displayDFA() {
    cout << "\nDFA Transitions:\n";
    for (int i = 0; i < totalDfaStates; i++) {
        cout << "State " << i << " (NFA states: { ";
        for (int j = 0; j < dfaStatesSize[i]; j++) {
            cout << dfaStates[i][j] << " ";
        }
        cout << "}):\n";

        for (int sym = 0; sym < nfaSymbols; sym++) {
            cout << "  on '" << symbols[sym] << "' -> ";
            if (dfaTransitions[i][sym] == -1)
                cout << "-";
            else
                cout << dfaTransitions[i][sym];
            cout << "\n";
        }
    }
}

int main() {
    cout << "Enter number of NFA states: ";
    cin >> nfaStates;
    cout << "Enter number of input symbols: ";
    cin >> nfaSymbols;

    cout << "Enter symbols: ";
    for (int i = 0; i < nfaSymbols; i++) {
        cin >> symbols[i];
    }

    for (int state = 0; state < nfaStates; state++) {
        for (int sym = 0; sym < nfaSymbols; sym++) {
            cout << "Enter number of transitions for state " << state << " on symbol " << symbols[sym] << ": ";
            int count; cin >> count;
            nfaCount[state][sym] = count;
            cout << "Enter next states: ";
            for (int t = 0; t < count; t++) {
                cin >> nfa[state][sym][t];
            }
        }
    }

    convertToDFA();
    displayDFA();

    return 0;
}
