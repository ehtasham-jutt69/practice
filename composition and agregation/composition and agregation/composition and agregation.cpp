#include<iostream>
using namespace std;
class Teacher;

class Teacher
{
private:
	string qualification;
	int age;
public:
	//Teacher ():qualification("matric"), age(23){}
	Teacher()
	{
		cout << "Default constructor is called " << endl;
	}
	Teacher(string s ,int a) :qualification("inter "), age(25) 
	{
		cout << "teacher constructor is called "<<s << endl;
		qualification = s;
		age = a;
	}
	Teacher(const Teacher& obj)
	{
		cout << " CC is called for " << qualification<<endl;
		qualification = obj.qualification;
		age = obj.age;
	}
	~Teacher() {
		cout << "DESTRUCTOR IS CALLED for TEACHER" << endl;
	}
	void setQ(string s)

	{
		qualification = s;
	}
	int getage()
	{
		return age;
	}
	string getQ()
	{
		return qualification;
	}


};

class assitant
{
private:
	string name;
	int marks;
	Teacher t;
public:


	friend ostream& operator<<(ostream& out, assitant& obj);
public:



	assitant(string s, int a, Teacher &tt) :name(s), marks(a),t(tt)
	{
		cout << "assitant constructor is called "<<s << endl;
		name = s;
		marks = a;

	}
	~assitant() {
		cout << "DESTRUCTOR IS CALLED for assitant" << endl;
	}
	int getmarks()
	{
		return marks;
	}
	string getname()
	{
		return name;
	}

};
ostream& operator<<(ostream& out, assitant& obj) {
	out << obj.name << endl;
	out << obj.marks << endl;
	out << obj.t.getQ() << endl;
	out << obj.t.getage() << endl;
	return out;
}
int main()
{
	Teacher t;
	Teacher a1("Bs ", 56);
	//Teacher *a1=new Teacher ("fahad",129);
	assitant t1( "asad ",1029,a1);
	cout << t1;



}