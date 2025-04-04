#include<stdio.h>
int main()
{   int i,j;
    char n[10]={'A','B','C','D','E'};
    for( i=4; i>=0; i--)
    {
        for ( j=0; j<=i; j++)
        {
            printf("%c",n[j]);
        }
        printf("\n");
    }

}