#ifndef HEADER_H
#define HEADER_H
#include<iostream>
using namespace std;
class complex
{
private :
	
	double real;
	double img;
	friend void  print(const complex&);
    friend void read(complex&);
	 friend complex modify(const complex & ) ;
public:
	complex();
	complex(double, double);
	complex(const complex&);
	void setreal(double);
	void setimg(double);
	double  getreal();
	double getimg();
	
};
#endif
