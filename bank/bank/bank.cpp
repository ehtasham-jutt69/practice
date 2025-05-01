#include <iostream>
#include <string>
using namespace std;
class account
{
private :
	string name;
	int balance;
public :
	int wid, v;
	account(string r, int b)
	{
		name = r;
		balance = b;
	}
	void setname(  string x)
	{
		name = x;
	
	}
	string  getname() const
	{
		return name;
	}
	void setbalance( int b)
	{
		balance = b;
	}
	int   getbalance() const 
	{
		return balance;
	}



	void deposit()
	{
		int dep = 0;
		cout << " enter the amount you want to deposit " << endl;
		cin >> dep;
		
		cout << " your new balance is " << v + dep <<endl;


	}



	void widraw()
	{
		
	
		cout << " enter amout you want to withdraw ";
		cin >> wid;
		if (wid > balance)
		{
			cout << " withdraw  amount exceeded account balance  ";
		}
		else
			 v = balance - wid;
			cout << "  remaining balance is " << v << endl;
	}

};
int main()
{
	account acc1 (" ahmed " , 400), acc2("usman ",300);
		string s;
		int b;
		
	cout<<	acc1.getname();
	
		cout << " 's balance is " << acc1.getbalance() <<endl;
	

	
	
	acc1.widraw();
	acc1.deposit();

	cout << acc2.getname();

	cout << " 's balance is " << acc2.getbalance() << endl;




	acc2.widraw();
	cout << endl;
	acc2.deposit();
}
