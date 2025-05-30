#include <iostream>
using namespace std;

class MyClass 
{
private:
   const int privateData=20;

public:
    MyClass(int data) : privateData(data) 
    {}

    friend void friendFunction(MyClass& obj);
};

void friendFunction(MyClass& obj) 
{
    cout << "Private data: " << obj.privateData << endl;
}

int main() 
{
    MyClass obj(30);
    friendFunction(obj); // Accessing private data through friend function
    return 0;
}