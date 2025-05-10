#include <iostream>
using namespace std;

class rectangle
{
private:

	double length, width;
public:
	rectangle();// default constructor
	rectangle(double, double );//parmetric constructor 
	double getlength() const ;
	double getwidth() const;
	void set(double, double);
	void setlength(double);
	void setwidth(double);
	double getarea() const ;
	~rectangle();//distructor
};
rectangle bali(rectangle o1, rectangle o2)
{
	rectangle r5;
	r5.setlength(92);
	return r5;
}
rectangle :: ~rectangle()
{
	cout << " distractor of the obj with length = " << length << " and width = " << width << endl;
}
rectangle::rectangle()
{
	length = 7;
	width = 10;
	cout << "default constructor is called with length " <<length <<" and width "<< width << endl;
}

rectangle::rectangle(double l , double w)
{
	length = l;
	width = w;


	cout << "paramitric constructor is called with length  "<<length <<"and width "<<width << endl;
}

double rectangle::getlength()const 
{
	return length;
}
double rectangle::getwidth() const 
{
	return width;
}
void rectangle::set(double l, double w)

{
	length = l;
	width = w;
}
void rectangle::setlength(double l)
{
	length = l;

}
void rectangle::setwidth(double w)
{

	width = w;
}
double rectangle::getarea() const 
{
	return length * width;
}


void printrec(const rectangle& );

int main()
{
	rectangle r2, r1(3, 6), r,r5;
	//r1.setwidth(9);
	//r2.set(6, 2);
	cout << "length of r1 is " << r1.getlength() << endl;
	cout << "width of r1 is " << r1.getwidth() << endl;
	cout << "length of r2 is " << r2.getlength() << endl;
	cout << "width of r2 is " << r2.getwidth() << endl;
	cout << " total area of r1 is " << r1.getarea() << endl;
	cout << " total area of r2 is " << r2.getarea() << endl;
	cout << "friend function checking " << r5.setlength() << endl;


	void printrec(const rectangle & r);
	{
		rectangle rr;

		cout << "length of rectangle " << r.getlength() << endl
			<< "width of rectangle " << r.getwidth() << endl
			<< "area of rectangle " << r.getarea() << endl;

	}
}