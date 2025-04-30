#include "abc.h"
person::person():age(38),roll(42), adress(12345)
{
}

void person::setage(int a)
{
	age = a;

}

void person::setrolladress(int r, int ad)
{
	roll = r;
	adress = ad;

}
int person::getage()const 
{
	return age;
}
int person::getrolladress()const 
{
	return roll;
	return adress;
}

int person:: bonus()const 
{
	cout << "bonus" << endl;
	return age* roll;


}
void  modify(person& r)
{
	cout << "enter age " << endl;
	cin >> r.age;
	cout << "enter roll " << endl;
	cin >> r.roll;
	cout << " enter adress " << endl;
	cin >> r.adress;
}