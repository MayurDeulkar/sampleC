#include<iostream>
using namespace std;

struct sdemo{
    char name[80];
    int age;
    float salary;
}sd;

union udemo
{
    char name[80];
    int age;
    float salary;
}ud;

int main()
{
    cout<<"\nsize of struct is :"<<sizeof(sd)<<endl;
    cout<<"\nsize of union is :"<<sizeof(ud)<<endl;
}