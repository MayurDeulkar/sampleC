#include<iostream>
using namespace std;

class vehicle
{
    public:
    int a;
    vehicle()
    {
        cout<<"This is a vehicle"<<endl;
    }
};
class fourwheeler:public vehicle
{
    public:
    fourwheeler()
    {
        cout<<"objects with 4 wheelers are vehicles"<<endl;
    }
};
class car : public fourwheeler
{
    public:
    car()
    {
        cout<<"cars has a four wheel"<<endl;
    }
};
int main()
{
    car obj;

    return 0;
}