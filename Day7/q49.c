#include<stdio.h>
int main()
{
    int i,j,a=3;
    for(i=0; i<=2; i++)
    {
        for (j=a-i; j<=a; j++)
        {
            printf("%d ",j);
        } 
        printf("\n");
    }
    
    for(i=0; i<=3; i++)
    {
        for (int j=i; j<=3; j++)
        {
            printf("%d ",j);
        } 
        printf("\n");
    }
}