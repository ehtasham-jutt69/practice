#include <iostream>
#include<string>
using namespace std;
class matrix
{
	int rows, cols;
	int **b;
public:
	void friend print(matrix&);
	matrix()
	{

	}
	matrix(int r, int c)
	{
		rows = r;
		cols = c;
		b = new int* [r];
		for (int i = 0; i < r; i++)
		{
			b[i] = new int [c];
		}
	}
	matrix(matrix& m)
	{
		this->rows = m.rows;
		this->cols = m.cols;
		this->b = new int* [m.rows];
		for (int i = 0; i < rows; i++)
		{
			this->b[i] = new int[m.cols];
		}
		cout<<"copy construtor is called";
	}

	void get()
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cout << " enter value  [ "<< i<<" ][ "<<j <<"]" << endl;
				cin>> b[i][j];
			}
		
		}
	}
	matrix operator =(const matrix& );
	
};

matrix :: matrix  operator =(const matrix& m)
{
	this->rows = m.rows;
	this->cols = m.cols;
	b = new int* [m.rows];
	for (int i = 0; i <m.rows; i++)
	{
		b[i] = new int[m.cols];
	}
	return *this;
}
void print(matrix& r)
{
	for (int i = 0; i < r.rows; i++)
	{
		for (int j = 0; j < r.cols ;j++)
		{
			cout << " you have entered " << endl;
			cout << r.b[i][j];
		}
		cout << endl;
	}
}
int main()
{
	int r, c , **a;
	cout << "enter rows " << endl;
	cin >> r;
	cout << " enter cols " << endl;
	cin >> c;
	a = new int* [r];
		for (int i = 0; i < r; i++)
		{
			a[i] = new int[c];

	}
	matrix m1(r, c);
	matrix m2;
		m2 = m1;
	m2.get();
	print(m2);
}
