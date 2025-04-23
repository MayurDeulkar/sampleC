#include <iostream>
using namespace std;

const int x = 3;      //global variable

int main()
 {
  	
    const int x = 10;     //local variable
   
    cout<< ::x<<endl;
    cout << x;
  
    return 0;
}
