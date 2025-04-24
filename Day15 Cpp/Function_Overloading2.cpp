#include<iostream>
using namespace std;

int sum(int a,int b)
{
    return (a+b);
}
int sum(int a,int b,int c)
{
    return (a+b+c);
}
int sum(int a,int b,int c,int d)
{
    return (a+b+c+d);
}
int sum(int a,int b,int c,int d,int e)
{
    return (a+b+c+d+e);
}
int main()
{
    int n;
    int a,b,c,d,e;
    cout<<"Enter how many number you want to sum:"<<endl;
    cin>>n;

    switch (n)
    {
    case 2:
       cout<<"Enter two number:"<<endl;
       cin>>a>>b;
       cout<<"Sum of Two No. is:"<<sum(a,b)<<endl;
        break;
     
        case 3:
        cout<<"Enter three number:"<<endl;
        cin>>a>>b>>c;
        cout<<"Sum of three No. is:"<<sum(a,b,c)<<endl;
         break;
    
         case 4:
       cout<<"Enter four number:"<<endl;
       cin>>a>>b>>c>>d;
       cout<<"Sum of Four no. is:"<<sum(a,b,c,d)<<endl;
        break;

        case 5:
       cout<<"Enter five number:"<<endl;
       cin>>a>>b>>c>>d>>e;
       cout<<"Sum of five no.is:"<<sum(a,b,c,d,e)<<endl;
        break;
    
    default:
        cout<<"Enter the number more than 1 and less than 6"<<endl;
        break;
    }
}