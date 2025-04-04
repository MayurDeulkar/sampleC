#include<stdio.h>

int main()
{
    int n,i=1;
    printf("Enter the number:");
    scanf("%d",&n);

    printf("\n By while Loop:");
    while(i<=n)
    {
        printf("\t %d",i);
        i++;
    }

    printf("\n By For Loop:");
    for(i=1; i<=n; i++)
    {
        printf("\t %d",i);
    }

    printf("\n By Do-While Loop:");

         i=1;
    do{
        printf("\t %d",i);
        i++;
    }while(i<=n);

}