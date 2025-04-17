#include<stdio.h>
void getdata();
int main()
{
    getdata();
}

void getdata()
{
    int n, reverse=0, remainder, og=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
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