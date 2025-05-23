#include<iostream>
using namespace std;

class one
{
    public:
    int a,b;
    void setdata(int x, int y)
    {
        a=x;
        b=y;
    }

    //main return function of object
    one add(one obj2)
    {
        one temp;
        temp.a= a+ (obj2.a);
        temp.b = b+ (obj2.b);
        return temp;
    }

    void getdata()
    {
        cout<<a<<" "<<b;
    }
};
int main()
{
    one obj1,obj2,obj3;
    obj1.setdata(4,7);
    obj2.setdata(5,6);

    obj3 = obj1.add(obj2);
    obj3.getdata();
}