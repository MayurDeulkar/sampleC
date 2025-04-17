#include<stdio.h>
void getdata(int n);
int main()
{
    int a;
    printf("Enter the interger:");
    scanf("%d",&a);
    
    getdata(a);
}

void getdata(int n)
{
   int reverse=0, remainder, og=0;
    og = n;

    while (n != 0) 
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    if (og == reverse)
    {
        printf("\n%d is a palindrome ", og);
    } 
    else
    {
        printf("\n%d is not a palindrome", og);
    }
}