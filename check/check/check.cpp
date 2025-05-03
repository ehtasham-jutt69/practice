
#include<iostream>
using namespace std;
class A
{
public:
	A() { cout << "A" << endl; }
	
	//~A() { cout << "~A" << endl; }
};
class B
{
	A a;
public:
	B() { cout << "B" << endl; }
	//~B() { cout << "~B" << endl; }
};
class C : virtual public B
{
public:
	C() { cout << "C" << endl; }
	//~C() { cout << "~C" << endl; }
};
class D :  public B
{
public:
	D() { cout << "D" << endl; }
	//~D() { cout << "~D" << endl; }
};
class E :  public C,  public D
{
public:
	E() { cout << "E" << endl; }
	//~E() { cout << "~E" << endl; }
};

int main()
{
	E e;
}

