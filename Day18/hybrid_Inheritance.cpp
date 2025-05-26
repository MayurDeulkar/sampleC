#include<iostream>
using namespace std;

class vehicle
{
    public:
    vehicle()
    {
        cout<<"this is a vehicle base class"<<endl;
    }
};
class fare
{
    public:
    fare()
    {
        cout<<"this is a fare base class"<<endl;
    }
};
class car: public vehicle
{
    public:
    car()
    {
        cout<<"this is a car derived class from vehicle"<<endl;
    }
};

class bus :public vehicle, public fare
{
    public:
    bus()
    {
        cout<<"this is a bus derived class of vehicle and fare"<<endl;
    }
};

int main()
{
    car obj;
    bus obj2;
    
    return 0;
}