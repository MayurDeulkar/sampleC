#include<iostream>
using namespace std;

class one
{
    public:
    static int a;
    int b;

   static void setdata(int x)
    {
        a++;
    }
    void dis()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int one::a;
int main()
{
    one obj1,obj2,obj3;
   obj1.setdata(4);
    obj2.setdata(1);
    obj3.setdata(5);

    obj1.dis();
    obj2.dis();
    obj3.dis();

}