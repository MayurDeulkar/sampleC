#include<stdio.h>

int main()
{
    int a,b,c, sum=0,count=0;
    printf("Enter the two numbers:");
    scanf("%d,%d",&a,&b);

    for (int i=a ; i<=b ; i++)
    {
        c = i%7;
        if(c == 2 || c == 3)
        {
            printf("\n when Value is %d",i);
        }

    }
}