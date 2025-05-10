#include<iostream>
#include<string>
using namespace std;
class date
{
private:
	int day = 0, month = 0, year = 0;
public:
	date(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}
	void setday(int d)
	{
		day = d;
	}
	void setl(int m)
	{
		month = m;
	}
	void sets(int y)
	{
		year = y;
	}
	int getday()
	{
		return day;
	}
	int   getmonth()
	{
		return month;
	}
	int getyear()
	{
		return year;
	}

	void  chck()
	{
		if (month < 0 || month >12)
		{
			month = 1;

		}
		else
			month = month;

	}
	void  disp()
	{
		cout << " you have entered the following date  : " << day << " / " << month << " / " << year;
	}
	~date()
	{

	}
};
int main()
{
	date d1(16, 05, 2012), d2(19, 15, 2003);

	//cout<e1.getf() <<" "<< e1.getl();
	d1.chck();
	d1.disp() ;
	cout << endl;
	d2.chck();
	d2.disp() ;

	/*cout << " and salary after 10 % bonus  is " << e1.bonus()<<endl;
	cout << e2.getf() << " " << e2.getl();
	cout << " employee_2 yearly salary is  " << e2.disp() << endl;
	cout << " and its  salary after raise is " << e2.bonus() <<endl;*/


}