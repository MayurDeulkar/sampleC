#include<stdio.h>
#include<ctype.h>
int main()
{
    char a[4]={'A','B','C'};
   
    for(int i=0; i<=3; i++)
    {
        printf("%c ",a[i]);
        for (int j=0; j<=3; j++)
        {
            printf("%c ",tolower(a[i]));
        }
        printf("\n");
    }
}