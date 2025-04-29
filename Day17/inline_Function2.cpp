#include<iostream>
using namespace std;

class one
{
    public:
    char arr[50];
    int i;
   inline void fun()
    {
        cout<<"Enter the string:"<<endl;
        for( i=0;i<=4;i++)
        {
            cin>>arr[i];
        }
        cout<<"Entered string is:"<<arr<<endl;
    }
};

int main()
{
    one obj;
    obj.fun();
    return 0;
}