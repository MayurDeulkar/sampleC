#include <stdio.h>
int main() 
{
  int n, reverse=0, remainder, og=0;
    printf("Enter an integer for while loop: ");
    scanf("%d", &n);
    og = n;

    //BY While Loop
    while (n != 0) 
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    if (og == reverse)
    {
        printf("\n%d is a palindrome by while loop", og);
    } 
    else
    {
        printf("\n%d is not a palindrome by while loop", og);
    }

    //for loop
    reverse=0;
    printf("\nEnter an integer for For loop: ");
    scanf("%d", &n);
    og =n;
    for(;n != 0; n/=10) 
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
    }
    if (og == reverse)
    {
        printf("\n%d is a palindrome by For loop", og);
    } 
    else
    {
        printf("\n%d is not a palindrome by For loop", og);
    }

    //do while loop
    reverse=0;
    printf("\nEnter an integer for Do-while loop: ");
    scanf("%d", &n);
    og = n;
     do
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }while (n != 0);
    if (og == reverse)
    {
        printf("\n%d is a palindrome by Do-while loop", og);
    } 
    else
    {
        printf("\n%d is not a palindrome by Do-while loop", og);
    }

}