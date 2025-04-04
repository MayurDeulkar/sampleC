#include<stdio.h>
int main()
{
    int i,j,a=68;
    for(i=0; i<=3; i++)
    {
        for(j=i; j<=4; j++)
        {
            printf("  ");
        }
        for (int k=a; k>=a-i; k--)
        {
            printf("%c ",k);
        } 
        printf("\n");
    }
    
    for(i=1; i<=3; i++)
    {
        for(j=-1; j<=i; j++)
        {
            printf("  ");
        }
        for (int j=3; j>=i; j--)
        {
            printf("%c ",j+65);
        } 
        printf("\n");
    }
}