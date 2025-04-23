#include<iostream>
using namespace std;

void fun(int &x,int &y)
{
    x=12;
    y=13;
    cout<<x<<endl;
    cout<<y<<endl;
}
int main()
{
    int a=2,b=3;
    
    cout<<a<<endl;
    cout<<b<<endl;
    fun(a,b);
}