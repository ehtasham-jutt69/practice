///c++ program to print the details of a tv and the change its price 

#include <string.h>
#include <iostream>
using namespace std;

class tv
{
private :
	char modeloftv[20];
	char brandoftv[20];
	float retailprice;
public :
	tv(char model[], char brand[], float price);
	void  change(char model[], char brand[], float price);
	void display();

};
tv::tv(char model[], char brand[], float price)
{
	strcpy(modeloftv, model);
	strcpy(brandoftv, brand);
	retailprice = price ;
}
void tv::change(char model[], char brand[], float price)
{
	strcpy(modeloftv, model);
	strcpy(brandoftv, brand);
	retailprice = price;
}
void tv::display()
{
	cout << "brand name is " << brandoftv << endl;
	cout << "model name is " << modeloftv << endl;
	cout << "its price  is " << retailprice << endl;

}
int main()
{
	tv ttt = ( "sony", "MG3 ", 25000 );
	ttt.display();
	ttt.change(" samsg" , " AK47", 22300);
	cout << "displaying objects after chnging " << endl;
	ttt.display();
}