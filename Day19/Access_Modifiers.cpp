#include<iostream>
using namespace std;

class A
{
public:
        int x=5;
private:
        int y=10;
protected:
        int z=20;
        public:
        int getPVT() 
        { 
                return y; 
        }
};
class classB:public A
{
      public:  
     int getProt() 
        { 
        return z; 
        }
};

class C: protected A
{
    public:
        int getProt() 
        { 
        return z; 
        }

      int getPVT() 
      {
        return A::getPVT(); 
        }
};

class D: private A
{
   public:
   int getProt() 
        {
        return z; 
        }

    int getPub() 
        {
         return x; 
        }

      int getPVT() 
        {
         return A::getPVT(); 
        }
};
int main()
{
    classB obj;
    cout<<"In Class B public x="<<obj.x<<endl;
    cout<<"In Class B private y="<<obj.getPVT()<<endl;  
    cout<<"In Class B protected z="<<obj.getProt()<<endl; 
    
    C obj1;
    cout<<"In Class C public x="<<obj.x<<endl;
    cout<<"In Class C private y="<<obj1.getPVT()<<endl;  
    cout<<"In Class C protected z="<<obj1.getProt()<<endl;
    
    D obj2;
   cout<<"In Class D public x="<<obj.x<<endl;
    cout<<"In Class D private y="<<obj2.getPVT()<<endl;  
    cout<<"In Class D protected z="<<obj2.getProt()<<endl;
}