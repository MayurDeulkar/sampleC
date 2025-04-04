#include <stdio.h>
int main() 
{
  int n, reverse=0, remainder, og;
    printf("Enter an integer: ");
    scanf("%d", &n);
    og = n;

    // reversed variable
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

}