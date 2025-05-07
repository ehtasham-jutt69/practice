#include "rectangle.h"

   double rectangle :: getlength()
{
	return length;
}
	double rectangle::getwidth()
	{
		return width;
	}
	void rectangle::set(double l, double w )

	{
		length = l;
		width = w;
	}
	void rectangle::setlength(double l)
	{
		length= l;
		
	}
	void rectangle::setwidth( double w)
	{
		
		width = w;
	}
	double rectangle :: getarea()
	{
		return length * width;
	}

	
