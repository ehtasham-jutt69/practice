#include "abc.h"
void print(const person&);
void modify(person&);
int main()
{
	person p1 ,p2;
	print(p1);
	modify(p2);
	//p1.setage(34);
	//p1.setrolladress(123, 45446);
	print(p2);
}
void  print(const person& r)
{
	
	cout << "the age of empoloy is " << r.getage() << endl;
	cout << " the roll is " << r.getrolladress() << endl;
	cout << r.bonus()<<endl;
}