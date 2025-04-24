#include<iostream>
using namespace std;

//volume of cuboid
inline int volume(int l, int b,int h)
{
    return(l*b*h);
}
//volume of cylinder
inline int volume(double r,int h)
{
    return(3.14*r*r*h);
}

//volume of cube
inline int volume(int a)
{
    return(a*a*a);
}
int main()
{
    cout<<"The volume of cuboid is:"<<volume(3,6,8)<<endl;
    cout<<"The volume of cylinder is:"<<volume(7,5)<<endl;
    cout<<"The Volume of cube is:"<<volume(5)<<endl;
    return 0;
}