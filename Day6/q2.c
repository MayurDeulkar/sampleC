#include<stdio.h>

int main()
{
    int n,i=1;
    printf("Enter the number:");
    scanf("%d",&n);

   printf("\n By while Loop:");
    while(1<=n)
    {
        printf("\t %d",n);
        i++;
        n--;
    }

    printf("\n Enter the number for loop:");
    scanf("%d",&n);
    printf("\n By For Loop:");
    for(i=1; 1<=n; i++)
    {
        printf("\t %d",n);
        n--;
    }

    printf("\n Enter the number for do-while loop:");
    scanf("%d",&n);
    printf("\n By Do-While Loop:");

         i=1;
    do{
        printf("\t %d",n);
        i++;
        n--;
    }while(1<=n);

}