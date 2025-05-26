#include<iostream>
using namespace std;

class vehicle
{
    public:
    int a;
    vehicle()
    {
        cout<<"This is base class"<<endl;
    }

};
class car: public vehicle
{
    public:
    int b; 
    car()
    {
        a=3;
        b=10;
        cout<<"This is derived class"<<endl;

    }
    void dis()
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    car obj;
    obj.dis();

    return 0;

}