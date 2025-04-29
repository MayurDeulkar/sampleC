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

    void add(two cobj2)
    {
         c = a+ cobj2.a;
         d = b+ cobj2.b;
    }

    void getdata()
    {
        cout<<c<<" "<<d;
    }
};
int main()
{
    two obj1,obj2;
    obj1.setdata(4,5);
    obj2.setdata(7,8);

    obj1.add(obj2);

    obj1.getdata();
}