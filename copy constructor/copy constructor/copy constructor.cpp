#include <iostream>
#include<string>
using namespace std;
class matrix
{
	int cols, rows;
	int** a ;
public :
	matrix()
	{
	}
	matrix(matrix& m)
	{
		 a = new int* [m.rows];
		 for (int i= 0; i < m.rows; i++)
		 {
			 a[i] = new int[m.cols];
			 cout << " copy constructor is called " << endl;
		 }


	}
	matrix( int r, int c)
	{
		rows = r; cols = c;
		a = new int* [r];
		for (int i = 0; i < r; i++)
		{
			a[i] = new int[c];
		}
		
	}
	void friend print(matrix &);
	void getValues()
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cout << "enter value for index [" << i << "][" << j << "]";
				cin >> a[i][j];
			}
			cout << endl;
		}
	}
};
void print(matrix &m)
{
	for (int i = 0; i < m.rows; i++)
	{
		for (int j = 0; j < m.cols; j++)
		{
			
			cout<<m.a[i][j];
		}
		cout << endl;
	}

}



int main()
{
	
	int c, r, ** a;
	cout << " enter rows"<<endl;
	cin >> r;
	cout << " enter cols" << endl;
	cin >> c;
	a = new int* [r];
	for (int i = 0; i < r; i++)
	{
		a[i] = new int[c];

	}
	
	matrix m1(r, c);

	matrix m2 = m1;
		m2.getValues();
	print(m2);
}
