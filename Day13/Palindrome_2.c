#include<stdio.h>
int getdata();
int main()
{
    int x;
    x=getdata();
    if(x ==1)
    {
        printf("\nNumber is a palindrome ");
    }
    else{
        printf("\nNumber is not palindrome ");
    }
}

int getdata()
{
    int flag =0;
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
        flag =1;
    } 
    else
    {
        flag =0;
    }
        return flag;

}