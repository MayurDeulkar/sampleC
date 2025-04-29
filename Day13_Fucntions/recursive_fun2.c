#include<stdio.h>

int mul(int n)
{
    if(n <=1)
    {
        return 1;
    }
    else
    {
        return n*mul(n-1);
    }
}
int main()
{
    int i,j;
    printf("enter the number:");
    scanf("%d",&i);
    j=mul(i);
    printf("Factorial is:%d",j);
}