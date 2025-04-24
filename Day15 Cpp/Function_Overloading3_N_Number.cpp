#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b, ans = 0; 
    char ch = 13; 

    cout << "Enter the first value: ";
    cin >> a;
    cout << "Enter the second value and further values: ";
    cin >> b;
    ans = add(a, b);

    while (ch != '\n') 
    {
        int next_num;
        cin >> next_num;
        ans = add(ans, next_num);
        cout << "\nCurrent sum: " << ans << endl;
        cin.get(ch);
    }
    cout << "\nAddition of all the values is: " << ans << endl;
    return 0;
}