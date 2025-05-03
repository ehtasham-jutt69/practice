#include"carpet.h"
carpet::carpet():size(),price(1000)
{

}
carpet::carpet(double p,double l,double w):size(l,w),price(p)
{

}
carpet::carpet(double p,const Square& r):size(r),price(p)
{

}
carpet::carpet(const carpet& r):size(r.size),price(r.price)
{

}
double carpet::getprice()
{
	return price;
}
void carpet::setprice(double p)
{
	price = p;
}
Square carpet:: getsize()
{
	return size;
}
void carpet::setsize(double l, double w)
{
   
}
void carpet:: setsize(Square& r) 
{
}
double carpet::gettotal()
{
	return  size.getarea()*price;
}