#include<iostream>
using namespace std;

class One
{
    public:
   virtual void dis()
    {
        cout<<"Class One"<<endl;
    }
};

class Two: public One
{
    public:
    void dis()
    {
        cout<<"class Two"<<endl;
    }
};

int main()
{
    One ob,*ptr;
    ptr = &ob;
    ptr-> dis();

    Two ob1;
    ptr =&ob1;
    ptr ->dis();

}