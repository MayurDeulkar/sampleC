#include<iostream>
using namespace std;

class vehicle
{
    public:
    vehicle()
    {
        cout<<"this is a vehicle"<<endl;
    }
};

class fourwheeler
{
    public:
    fourwheeler()
    {
        cout<<"this is a fourwheeler vehicle"<<endl;
    }
};

class car: public vehicle, public fourwheeler
{
 public:
 car()
 {
    cout<<"this is a car"<<endl;
 }
};

int main()
{
    car obj;

    return 0;
}