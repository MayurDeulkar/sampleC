#include<stdio.h>
int main()
{
    char b[5]={'A','B','C','D','E'};
    for(int i=0; i<=3; i++)
    {
        for (int j=0; j<=4; j++)
        {
            printf("%c ",b[j]);
        }
        printf("\n");
    }

}