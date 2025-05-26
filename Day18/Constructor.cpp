#include<iostream>
using namespace std;

class One 
{
    public:
    int a;
    One()
    {
        cout<<"Enter the number"<<endl;
            cin>>a;
            cout<<"COnstructor called"<<endl;
    }
    ~One()
    {
            cout<<"Destructor called"<<endl;
    }

    void dis()
    {
        cout<<"entered number is"<<" "<<a<<endl;
    }
};
int main()
{
    One obj,obj1,obj3;
   obj.dis();
   //obj1.dis();
   // obj3.dis();
}