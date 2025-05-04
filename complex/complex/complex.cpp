#include "Header.h"
void complex::setreal(double r)
{
	real = r;

}
void complex::setimg(double i)
{
	img = i;

}
double complex::getreal()
{
	return real;
}
double  complex::getimg()
{
	return img;
}
void read(complex& r)
{
	cout << "enter feet " << endl;
	cin >> r.real;
	cout << "enter inches" << endl;
	cin >> r.img;
}

void print(const complex& r)
{
	cout << " distance is " << r.real << " + " << r.img  << endl;
}
complex  modify(const complex& r )
{
	complex result ;
	if (r.img >= 12)
		r.real++;

	result.real  = r.real + w.real;
	result.img = r.img + w.img;
	return result ;
}
complex::complex(double r , double i)
{
	real = r;
	img = i;

}
complex::complex()
{
	real = 2;
	img = 5;
}
complex::complex(const complex& c)
{
	real = c.real;
	img = c.img;
	cout << "copy is callled" << endl;
}