#include "rectangle.h"
#include < iostream>
using namespace std;

int main()
{
	rectangle r1, r2;
	r1.setlength(3);
	r1.setwidth(5);
	r2.set(4.5, 3.7);
	cout << "length of r1 is " << r1.getlength() << endl;
	cout << "width of r1 is " << r1.getwidth() << endl;
	cout << "length of r2 is " << r2.getlength() << endl;
	cout << "width of r2 is " << r2.getwidth() << endl;
	cout << " total area of r1 is " << r1.getarea() << endl;
	cout << " total area of r2 is " << r2.getarea() << endl;

}