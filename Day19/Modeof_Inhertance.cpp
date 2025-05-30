#include<iostream>
using namespace std;

class One
{
    public:
    int a=7;

};

class Two : private One
{
    private:
    int b=4;
    int c;
    void add();
};

 void Two::add()
    {
        c=a+b;
        cout<<c<<endl;
    }


int main()
{
    Two obj;

}