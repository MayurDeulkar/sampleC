#include<iostream>
using namespace std;
  
class Base
{
public:
    virtual void show() 
    {
         cout<<" In Base"<<endl; 
        }
};
  
class Derived: public Base
{
public:
    void show() 
    {
         cout<<"In Derived"<<endl; 
        }
};
  
int main()
{
    Base *bp = new Derived;
    bp->show();  
    return 0;
}