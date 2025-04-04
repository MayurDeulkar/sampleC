#include<stdio.h>
int main()
{
    int i,j,a=64;
    for(i=0; i<=4; i++)
    {
        for (int k=1; k<=i; k++)
        {
            printf("%c ",k+a);
        } 
        printf("\n");
    }
    
    for(i=1; i<=3; i++)
    {
        for (int j=i; j<=3; j++)
        {
            printf("%c ",j+a);
        } 
        a--;
        printf("\n");
    }
}