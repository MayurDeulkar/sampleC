#include <iostream>
using namespace std;

class Construct {
public:
    int x;
    Construct()
    {
        cout<<"Default Constructor called"<<endl;
    }
  
  	// Copy Constructor definition
    Construct (Construct &obj) 
    {
        x = obj.x;
      	cout << "Copy constructor "<< endl;
    }

    ~Construct()
    {
            cout<<"Destructor called"<<endl;
    }

};

int main() 
{
    Construct obj1;
    obj1.x = 10;
    cout << "obj1's x = " << obj1.x << endl;

    Construct obj2(obj1);
    cout << "obj2's x = " << obj2.x <<endl;
    return 0;
}