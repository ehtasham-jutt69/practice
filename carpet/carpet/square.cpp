#include"Square.h"
Square::Square()
{
	cout << "default square called for length";//<< length << "  width " << width << endl;
}
Square::Square(double l,double w) :length(1), width(2)
{


}
Square::Square(const Square& r) :length(r.length), width(r.width)
{

}
void  Square:: set(double l, double w)
{

}
void  Square:: setlength(double l)
{
	length = l;
	
}
void  Square::setwidth(double w)
{
	width=w;
	
}

double Square :: get()
{
	return length;
}
double Square::getarea()
{
	return length * width;
}