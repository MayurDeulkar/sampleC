#include<stdio.h>
int main()
{
    int a[5]={'E','D','B','A'};
    
    for(int i=0; i<=3; i++)
    {
        for (int j=0; j<=4; j++)
        {
            printf("%c ",a[i]); 
        }
        printf("\n");
    }

}