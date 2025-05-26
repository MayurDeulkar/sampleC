#include <iostream>
using namespace std;

class Hello 
{
    public:
    int *p;

    // default constructor
    Hello()
    {
        // allocating memory at run time
        p = new int;
        *p = 0;
    }

    // parameterized constructor
    Hello(int x)
    {
        p = new int;
        *p = x;
    }
    void display() 
    { 
      cout << *p << endl;
    }

    ~Hello() 
    { 
      delete p; 
    }
};

int main()
{
    //Hello obj1 = Hello();
    Hello obj1;
    obj1.display();
   
    Hello obj2 = Hello(7);
    obj2.display();
    return 0;
}