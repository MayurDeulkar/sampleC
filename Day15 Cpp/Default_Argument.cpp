#include<iostream>
using namespace std;

//Default argument
int sum(int a,int b=6)
{
    cout<<"using function with two arguments"<<endl;
    return a+b;
}
int sum2(int a,int b, int c=3)
{
    cout<<"using fucntion with three arguments"<<endl;
    return a+b+c;
}
int main()
{
    cout<< "The sum of two Number is:"<<sum(3)<<endl;
    cout<< "The sum of three Number is:"<<sum2(9,4)<<endl;
    cout<< "The sum of three Number is:"<<sum2(3,4,7)<<endl;
    return 0;
}