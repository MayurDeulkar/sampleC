#include<stdio.h>
int main()
{
    int s[5],i;
    printf("Enter the Array elements:");
    for( i=0;i<=4;i++)
    {
        scanf("%d",&s[i]);
    
        if(s[i] < 5)
        {
            printf("\non %d position value is %d ",i,s[i]);
        }
        
    }
}    