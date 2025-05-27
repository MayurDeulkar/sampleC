#include<iostream>
using namespace std;

class A
{
    public:
    int a;
    void dis()
    {
        cout<<"This is class A"<<endl;
    }
};

class B: public A
{
     public:
    int b;
    void dis()
    {
        cout<<"This is class B"<<endl;
    }
};

class C:public A
{
     public:
    int c;
    void dis()
    {
        cout<<"This is class C"<<endl;
    }
};

class D: public B,public C
{
     public:
    int d;
    void dis()
    {
        cout<<"This is class D"<<endl;
    }
};
int main()
{
    D obj;

    //ambiguity problom solved using scope resolution problem
    obj.B::a=10;
    obj.C::a=100;
    obj.b=20;
    obj.c=30;
    obj.d=40;

    obj.dis();
    cout<<"a from class B: "<<obj.B::a<<endl;
    cout<<"a from class C: "<<obj.C::a<<endl;
    cout<<"b from class B: "<<obj.b<<endl;
    cout<<"c from class C: "<<obj.c<<endl;
    cout<<"d from class D: "<<obj.d<<endl;
}