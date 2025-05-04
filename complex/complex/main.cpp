#include "Header.h"
int main()
{
	complex add, c1, c2;
	//complex c1(2,3);
	//complex c2(5,6);
	read(c1);
	read(c2);
	complex c3 =c2;

//	c1.setreal(2);
//	c1.setimg(5);
	//c2.setreal(5);
	//c2.setimg(6);
	print(c1);
	print(c3);
	add = sum(c1 , c3);
	print(add);
	
}