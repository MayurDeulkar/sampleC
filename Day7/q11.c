#include<stdio.h>
int main()
{
    char a[4]={'A','B','C','D'};
    for(int i=0; i<=3; i++)
    {
        
        for (int j=0; j<=i; j++)
        {
            printf("%c ",a[j]);
            
        }
        printf("\n");
       
    }

}