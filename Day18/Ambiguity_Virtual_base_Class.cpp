#include<iostream>
using namespace std;

class A
{
    public:
    int a;
    void dis()
    {
        cout<<"this is class A"<<endl;
    }
};

class B:virtual public A
{
    public:
    int b;
    void dis()
    {
        cout<<"this is class B"<<endl;

    }
};

class C :virtual public A
{
    public:
    int c;
    void dis()
    {
        cout<<"This is class C"<<endl;
    }
};

class D:public B,public C
{
    public:
    int d;
    void dis()
    {
        cout<<"this is class D"<<endl;

    }
};

int main()
{
    D obj;
    obj.a=10;
    obj.a=100;
    obj.b=20;
    obj.c=30;
    obj.d=40;

obj.dis();
    cout<<"A :"<<obj.a<<endl;
    cout<<"a :"<<obj.a<<endl;
    cout<<"B :"<<obj.b<<endl;
    cout<<"C :"<<obj.c<<endl;
    cout<<"D :"<<obj.d<<endl;

}