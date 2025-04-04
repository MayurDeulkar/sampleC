#include<stdio.h>
int main()
{
    int i,j,a=3;
    for(i=0; i<=3; i++)
    {
        for (j=a; j>=a-i; j--)
        {
            printf("%d ",j);
        } 
        printf("\n");
    }
    
    for(i=1; i<=4; i++)
    {
        for (int j=3; j>=i; j--)
        {
            printf("%d ",j);
        } 
        printf("\n");
    }
}