
#include <iostream>

template<class T1, class T2>
struct pair {
	T1 first;
	T2 second;
	pair(T1 f = T1(), T2 s = T2()) : first(f), second(s) {}
};

template<class T1, class T2>
struct mnode {
	pair<T1, T2> data;
	mnode<T1, T2>* parent, *left, *right;
	int height;
	bool isnil;
	mnode() {
		isnil = false;
	}
};
template<class T1, class T2>
class avl<T1, T2>;

template<class T1, class T2>
class iterator {
	mnode<T1, T2> *ptr;
	friend class avl<T1, T2>;
public:
	iterator() {
		ptr = nullptr;
	}
	iterator(mnode<T1, T2>* pt) {
		this->ptr = pt;
	}
	pair<T1, T2>& operator*() {
		return ptr->data;
	}
	pair<T1, T2>* operator->() {
		return &(ptr->data);
	}
};


template<class T1, class T2>
class avl {
private:
	mnode<T1, T2>* head;
	int s;
public:
	avl()
	{
		head = new mnode<T1, T2>;
		head->parent = head->left = head->right = head;
		head->height = 0;
	}
	mnode<T1, T2>* rotateRight(mnode<T1, T2>* node) {
		mnode<T1, T2>* temp = node->left;
		mnode<T1, T2>* h = node->parent;
		mnode<T1, T2>* temp2 = temp->right;
		temp->right = node;
		node->left = temp2;
		temp->parent = h;
		return temp; // return new root
	}
	mnode<T1, T2>* rotateLeft(mnode<T1, T2>* node)
	{
		mnode<T1, T2>* temp = node->right;
		mnode<T1, T2>* h = node->parent;
		mnode<T1, T2>* temp2 = temp->left;
		temp->left = node;
		node->right = temp2;
		temp->parent = h;
		return temp; // return new root
	}
	mnode<T1, T2>* leftLeft(mnode<T1, T2>* node)
	{
		return rotateRight(node);
	}
	mnode<T1, T2>* rightRight(mnode<T1, T2>* node)
	{
		return rotateLeft(node);
	}
	int getBalanceFactor(mnode<T1, T2>* node) {
		if (node != nullptr) {
			return getHeight(node->left) - getHeight(node->right);
		}
		else
			return 0;
	}
	void dobalance(mnode<T1, T2>* node, const pair<T1, T2>& val) {
		if (getBalanceFactor(node) > 1) {
			if (val.first < node->left->data.first) {
				rotateRight(node);
			}
			else {
				leftLeft(node);
			}
		}
		else if (getBalanceFactor(node) < -1) {
			if (val.first > node->right->data.first) {
				rotateLeft(node);
			}
			else {
				rightRight(node);
			}
		}
	}


	int getHeight(mnode<T1, T2>* node) {
		if (node != nullptr) {
			return node->height;
		}
		else
			return 0;
	}
	iterator<T1, T2> begin() {
		return iterator<T1, T2>(head->left);
	}
	iterator<T1, T2> end() {
		return iterator<T1, T2>(head);
	}

	pair<iterator<T1, T2>, bool> insert(const pair<T1, T2> val) {
		mnode<T1, T2>* newnode = new mnode<T1, T2>;
		newnode->left = newnode->right = head;
		newnode->data = val;
		newnode->height = 1; // Initialize height
		if (head->parent == head) {
			head->parent = head->left = head->right = newnode;
			newnode->parent = head;
			return pair<iterator<T1, T2>, bool>(iterator<T1, T2>(newnode), true);
		}
		mnode<T1, T2>* temp = head->parent;
		while (true) {
			if (temp->data.first == val.first) {
				delete newnode;
				return pair<iterator<T1, T2>, bool>(iterator<T1, T2>(temp), false);
			}
			if (temp->data.first > val.first) {
				if (temp->left == head) {
					temp->left = newnode;
					newnode->height = 1;
					newnode->parent->height++;
					newnode->parent = temp;
					if (head->left == temp) {
						head->left = newnode;
					}
					dobalance(newnode, val);
				}
				else {
					temp = temp->left;
				}
			}
			else {
				if (temp->right == head) {
					temp->right = newnode;
					newnode->height = 1;
					newnode->parent = temp;
					if (head->right == temp) {
						head->right = newnode;
					}
					dobalance(newnode, val);
				}
				else {
					temp = temp->right;
				}
			}
		}
	}
};


int main() {
	// Create an AVL tree object
	avl<int, std::string> myAVL;

	// Insert elements into the AVL tree
	
	myAVL.insert({ 42, "Hello" });
	myAVL.insert({ 43, "first" });
	myAVL.insert({ 44, "second" });
	myAVL.insert({ 45, "third" });
	myAVL.insert({ 46, "fourth" });
	//myAVL.insert(myair);

	// Iterate through the AVL tree using iterators
	
	return 0;
}
