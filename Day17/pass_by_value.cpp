#include<iostream>
using namespace std;

class two
{
    public:
    int a,b,c,d;

    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    // to change the values of obj1
    void change(two cobj1)
    {
         cobj1.a=12;
         cobj1.b=18;
    }

    void add(two cobj2)
    {
         c = a+ cobj2.a;
         d = b+ cobj2.b;
    }

    void getdata()
    {
        cout<<"pass by value of obj1 output is:"<<a<<" "<<b;
        cout<<"\nadd two obj using pass by value:"<<c<<" "<<d<<endl;
    }
};
int main()
{
    two obj1,obj2;
    obj1.setdata(4,5);
    obj2.setdata(7,8);
    obj1.change(obj1);
    obj1.add(obj2);
    obj1.getdata();
}