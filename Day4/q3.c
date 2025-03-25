#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the two numbers:");
    scanf("%d,%d",&a,&b);

    c=a%b;
    if(c == 0)
    {
        printf("Division is Possible");
    }
    else
    {
        printf("Division is not possible");
    }
}