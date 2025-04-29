#include<stdio.h>

int sum(int n)
{
    if(n !=0)
    {
        return n+sum(n-1);
    }
    else
    {
        return n;
    }
}
int main()
{
    int i,j;
    printf("Enter the number:");
    scanf("%d",&i);
    j=sum(i);
    printf("\n Sum is: %d",j);
}