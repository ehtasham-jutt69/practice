#include<iostream>
#include<cmath>
using namespace std;

void  bin_to_gry(long int);
int main()
{
	long int bin;
	cout << "enter binary " << endl;
	cin >> bin;
	bin_to_gry(bin);
}

void  bin_to_gry(long int  b)
{
	
	int rem[100];
	
	int i = 0;
	while (b != 0)
	{
		rem[i]= b % 10;
		b = b / 10;
		cout << rem[i]<<endl;
		i++;
		

	}

}