#ifndef HEADER_H
#define HEADER_H
#include <iostream>
using namespace std;
class person
{
private :
	int age=34;
	int roll=210;
	int adress=6675;
	friend void modify(person&);
public :
	person();
	void setage(int);
	void setrolladress(int, int);
	int getage()const ;
	int getrolladress()const ;
	int bonus( )const ;
};
#endif