#include <iostream>
using namespace std;

class Student {
private:
    // Private data members
    string name;
    int age;

public:
    // Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }

    // Public member function to display student details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Setter for name
    void setName(string n) {
        name = n;
    }

    // Getter for age
    int getAge() {
        return age;
    }

    // Setter for age
    void setAge(int a) {
        if (a > 0) {  // Basic validation
            age = a;
        }
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    // Creating an object using the constructor
    Student student1("John", 20);

    // Accessing public method to display details
    student1.display();

    // Trying to access private members directly (this would cause an error)
    // student1.name = "Alice"; // Error: 'name' is private within this context

    // Using setter to change the name
    student1.setName("Alice");

    // Using getter to access the name
    cout << "Updated Name: " << student1.getName() << endl;

    // Using setter to change the age
    student1.setAge(22);

    // Display updated details
    student1.display();

    return 0;
}

