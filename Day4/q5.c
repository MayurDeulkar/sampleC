#include<stdio.h>

int main()
{
    int a,b,c, sum=0,count=0;
    printf("Enter the two numbers:");
    scanf("%d,%d",&a,&b);

    for (int i=a ; i<=b ; i++)
    {
        c = i%17;
        if(c != 0 )
        {
            printf("\n when Value is %d",i);
            sum += i;
            count++;
        }
    }
    printf("\n Sum of all numbers not divisible by 17 is %d",sum);
    printf("\n count is %d",count);
}