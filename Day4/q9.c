#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the Number:");
    scanf("%d,%d",&a,&b);

    for(int i=1; i<=a; i++)
    {
       
       for(int j=1; j<=b ; j++)
       {
        printf("\t %d",j);
       }
       printf("\n");
    }
}