#include<stdio.h>
int main()
{
    char a[5]={'A','B','C','D'};
    for(int i=0; i<=3; i++)
    {
        for (int j=0; j<=4; j++)
        {
            printf("%c ",a[i]);
        }
        printf("\n");
    }
}