#include<iostream>
using namespace std;
class One
{
    public:
    virtual void dis()=0;
};
class Two: public One

{
    public:
    void dis()
    {
        cout<<"Hello"<<endl;
    }
};
int main()
{
    Two obj;
    obj.dis();
}
