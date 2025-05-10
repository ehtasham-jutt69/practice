


#include "deep.h"
//drive :: drive (int &d1,int &d2,int & d3):base(d2,d3),data3(d1){}
/*base::base()
{
	data1 = 7;
	data2 = 3;
}
base::base(int a, int b)
{
	data1 = a;
	data2=b;
}*/
void base::setdata()
{
	data1 = 2;
	data2 = 17; 
}
int base::getdata1()
{
	return  data1;
	//cout << "data 2 is  " << data2;
}
int base::getdata2()
{
	return  data2;
	//cout << "data 2 is  " << data2;
}
int drive::getdata3() {
	return data3=data2 * getdata1();
}
void drive::process()
{
	
	data3 = getdata2() * getdata1();
	cout << data3;
}
void drive::print()
{
	cout << " data 3 is  " << getdata3() << endl;
}