#include<stdio.h>

int main()
{
    int n,i,sum=0,sum2;
    printf("Enter the number:");
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        sum += i;
        i++;
    }
    printf("\n By While Loop sum of natural no. is:%d",sum);

   sum=0;
    for(i=1; i<=n; i++)
    {
        sum += i;
        
    }
    printf("\n By For Loop sum of natural no. is:%d",sum);

     i=1;
    do{
        sum2 += i;
        i++;
    }while(i<=n);
    printf("\n By Do-while Loop sum of natural no. is:%d",sum2);
}