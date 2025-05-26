#include <iostream>
//#include <string.h>
using namespace std;

class Student 
{
    public:

    int rno;
    string name;
    double fee;

  	// Declaration of parameterized constructor
    Student(int, string, double);
    void display();
    ~Student();
};

// Parameterized constructor outside class
Student::Student(int no, string n, double f) 
{
    rno = no;
    name = n;
    fee = f;
    cout<<"Contructor Called"<<endl;
}

//Destructor
Student::~Student()
{
    cout<<"Destructor called"<<endl;
}
void Student::display() 
{
    cout << rno << "\t" << name << "\t" << fee << endl;
}

int main() 
{
 
    Student s(12, "Ram", 10000);
    s.display();
    return 0;
}