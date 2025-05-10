#ifndef DEEP_H
#define DEEP_H
#include <iostream>
using namespace std;
class base
{
private:
	int data1;

public:
	int data2;
	//base();
	//base(int, int);
	void setdata();
	int  getdata1();
	int  getdata2();
};
class drive : public base
{
private :
	int data3;
public :
	    
	//drive(int&, int&, int&);
	void process();
	void print();
	int getdata3();

};
#endif



