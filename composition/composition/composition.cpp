/*#include <iostream>
using namespace std;
class marks
{
private :
	int mids, finals;
	friend void printdata(const marks&);
public :
	void set(int, int);
	void setfinals(int);
	void print(int, int);
	int getfinals();
	marks(int, int);
	marks();
};
marks::marks(int m, int f)
{
	mids = m;
	finals = f;
}
void marks::set(int m, int f)
{
	mids = m;
	finals=f;
}
void marks::print(int m , int f)
{
	cout << "marks in mids  " << mids << "and in finals are " << finals << endl;
}

class total
{
private :
	string students;
	marks m1;
public :
	total(string s  = "", int m = 0, int f = 0)
	{
		students = s;
		m1.set(m, f);
	}
	void printdata()
	{
		cout << "name is " << students << endl;
		cout << "marks are ";
		m1.print(m1.mids, m1.finals);
	}
};
----------------------------------------------*/
#include <iostream>
using namespace std;

class marks
{
private:
    int mids, finals;
    friend void printdata(const marks&);

public:
    void set(int, int);
    void setfinals(int);
    void print(int, int);
    int getfinals();
    marks(int, int);
    marks();
};

marks::marks(int m, int f)
{
    mids = m;
    finals = f;
}

void marks::set(int m, int f)
{
    mids = m;
    finals = f;
}

void marks::print(int m, int f)
{
    cout << "marks in mids: " << m << " and in finals are: " << f << endl;
}

class total
{
private:
    string students;
    marks m1;

public:
    total(string s = "", int m = 0, int f = 0)
    {
        students = s;
        m1.set(m, f);
    }

    void printdata()
    {
        cout << "name is " << students << endl;
        cout << "marks are ";
        m1.print(m1.mids, m1.finals);
    }
};

int main()
{
    total t1("John", 80, 90);
    t1.printdata();

    return 0;
}

// Output:
// name is John
// marks are marks in mids: 80 and in finals are: 90