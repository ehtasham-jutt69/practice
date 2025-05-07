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
		lenght = l;
		width = w;
	}
	void rectangle::setl(double l)
	{
		lenght = l;
		
	}
	void rectangle::setw( double w)
	{
		
		width = w;
	}
	double rectangle :: getarea()
	{
		return lenght * width;
	}

	
