#include<stdio.h>
int getdata(int n);
int main()
{
    int a,b;
    printf("Enter the interger:");
    scanf("%d",&a);
    
    b = getdata(a);
    if(b ==1)
    {
        printf("Number is Palindrome");
    }
    else{
        printf("Number is not Palindrome");
    }
}

int getdata(int n)
{
   int flag=0,reverse=0, remainder, og=0;
    og = n;

    while (n != 0) 
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    if (og == reverse)
    {
       flag=1;
    } 
    else
    {
       flag=0;
    }

    return flag;
}