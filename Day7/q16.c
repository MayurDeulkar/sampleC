#include<stdio.h>
int main()
{   int i,j;
    char n[10]={'A','B','C','D','E'};
    for( i=5; i>=0; i--)
    {
        for ( j=0; j<=i; j++)
        {
            printf("%c ",n[i]);
        }
        printf("\n");
    }

}