
#ifndef square_h
#define square_h
#include<iostream>
using namespace std;
class Square
{
private :
	double length, width;                                                                                                                                                                                                                                                                                          
public:
	void set(double, double);
	void setlength(double);
	void setwidth(double);
	double get();
	double getlength();
	double getwidth();
	double getarea();
	Square();
	Square(double, double);
	Square(const Square&);
};
#endif
