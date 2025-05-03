#pragma once
#include"square.h"
class carpet
{
private :
	double price;
	Square size;
public:
	carpet();
	carpet(double,double,double);
	carpet(double, const Square&);
	carpet(const carpet&);
	double getprice();
	void setprice(double);
	Square getsize();
	void setsize(double, double);
	void setsize(Square&);
	double gettotal();
};
