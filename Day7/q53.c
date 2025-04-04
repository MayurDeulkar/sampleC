#include<stdio.h>
int main()
{
    int i,j,a=48;
    for(i=1; i<=3; i++)
    {
        for(j=i; j<=4; j++)
        {
            printf("  ");
        }
        for (int k=1; k<=i; k++)
        {
            printf("%d ",k);
        } 
        printf("\n");
    }

    printf("  0 1 2 3");
    printf("\n");
    for(i=1; i<=3; i++)
    {
        
        for(j=0; j<=i; j++)
        {
            printf("  ");
        }
       
        for (int j=i; j<=3; j++)
        {
            printf("%c ",j+a); 
        } 
        a--;
        printf("\n");
    }
}