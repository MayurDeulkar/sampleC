#include<stdio.h>
int main()
{
    int i,j,a=67;
    for(i=1; i<=4; i++)
    {
        for(j=i; j<=4; j++)
        {
            printf("  ");
        }
        for (int k=1; k<=i; k++)
        {
            printf("%c ",k+a);
        } 
        a--;
        printf("\n");
    }
    
    for(i=1; i<=3; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("  ");
        }
        for (int j=i; j<=3; j++)
        {
            printf("%c ",j+65);
        } 
        printf("\n");
    }
}