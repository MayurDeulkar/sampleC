#include<stdio.h>
int main()
{
    int n,fact=1,fact1=1;
    printf("Enter the Number:");
    scanf("%d",&n);
    printf("\n By For Loop:");
    for(int i=1; i<=n; i++)
    {
        fact= fact*i;
        printf("\n %d Factorial is: %d",i,fact);
    }

    printf("\n By While Loop:");
    int i=1;
    while(i<=n)
    {
        fact1= fact1*i;
        printf("\n %d Factorial is: %d",i,fact1);
        i++;
    }

    printf("\n By Do-while Loop:");
    i=1,fact1=1;
    do{
        fact1= fact1*i;
        printf("\n %d Factorial is: %d",i,fact1);
        i++;
    }while(i<=n);
}