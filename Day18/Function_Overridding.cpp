#include<iostream>
using namespace std;

class One
{
    public:
    void dis()
    {
        cout<<"this is class One"<<endl;
    }
};
class Two :public One
{
    public:
    void dis()
    {
        cout<<"this is class Two"<<endl;
    }
};
class Three: public Two
{
    public:
    void dis()
    {
        cout<<"This is Class Three"<<endl;
    }
};
int main()
{
    Three obj;
    obj.dis();
    obj.Two::dis();
    obj.One::dis();
}
