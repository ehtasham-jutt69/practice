#include<iostream>
using namespace std;
class A
{
	int hold;
	public:
		A(int hold = 0) { this->hold = hold;		cout << "cons of A" << endl;
		}
		virtual void f()
		{
			hold += 2;
			cout << endl << "hold: " << hold;
		}
		virtual void g() = 0;
		void h()
		{
			hold += 4;
			cout << endl << "hold: " << hold;
		}
		int gethold()
		{
			cout << "A" << endl;
			return hold;
		}
};
class B
{
	int hold;
public:
	B(int hold = 0) { this->hold = hold;		cout << "cons of B" << endl;
	}
	virtual void f() = 0;
	 void g()
	{
		hold += 3;
		cout << endl << "hold: " << hold;
	}
	void h()
	{
		hold += 5;
		cout << endl << "hold: " << hold;
	}
	int gethold()
	{
		cout << "B" << endl;
		return hold;
	}
};
class D:public A,public B
{
	int hold;
public:
	D(int a= 0,int b=0):A(b),B(b),hold(a) {
		cout << "cons of D" << endl;
	}
	void f()
	{
		hold += 1;
		cout << endl << "hold: " << hold;
	}
	void g()
	{
		hold += 6;
		cout << endl << "hold: " << hold;
	 }
	void h()
	{
		hold += 7;
		cout << endl << "hold: " << hold;
	}
	int gethold()
	{
		cout << "D" << endl;
		return hold;
	}
};
int main()
{
	D dd(2, 0);
	A* ap = &dd;
//	B* bp = &dd;
	//D* dp = &dd;
	cout << ap->gethold();
	//cout << endl<< bp->gethold();
	//cout << endl<< dp->gethold();
//	ap->f();     ap->g();       ap->h();
//	bp->f();     bp->g();       bp->h();
//	dp->f();     dp->g();       dp->h();
}