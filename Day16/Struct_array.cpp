#include<iostream>
using namespace std;

struct student
{
    char name[80];
    int roll_no;
    int age;
}st[4];

int main()
{
 int i;
 for(i=1; i<=4; i++)
 {
    cout<<"Enter the name"<<i<<endl;
    cin>>st[i].name;
    cout<<"\nEnter the roll no."<<i<<endl;
    cin>>st[i].roll_no;
    cout<<"\nEnter the age"<<i<<endl;
    cin>>st[i].age;
 }
    cout<<"\n\tSTudent Records"<<endl;
    cout<<"\n\tName \t Roll No. \tAge"<<endl;
    for(i=1;i<=4;i++)
 {
    cout<<"\n\t"<<st[i].name<<"\t\t"<<st[i].roll_no<<"\t\t"<<st[i].age<<endl;
 }
}