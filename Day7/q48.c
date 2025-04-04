#include<stdio.h>
int main()
{
    int i,j,a=68;
    for(i=0; i<=3; i++)
    {
        for (j=a; j>=a-i; j--)
        {
            printf("%c ",j);
        } 
        printf("\n");
    }
    
    for(i=1; i<=4; i++)
    {
        for (int j=3; j>=i; j--)
        {
            printf("%c ",j+65);
        } 
        printf("\n");
    }
}