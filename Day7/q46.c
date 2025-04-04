#include<stdio.h>
int main()
{
    int i,j;
    for( i=0; i<=3; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("* ",j);
        } 
        printf("\n");
    }
    
    for(i=0; i<=3; i++)
    {
        for (int j=3; j>=i; j--)
        {
            printf("* ",j);
        } 
        printf("\n");
    }
}