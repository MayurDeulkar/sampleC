#include<stdio.h>
int main()
{
    int s[7],i;
    printf("Enter the Array elements:");
    for( i=0;i<=6;i++)
    {
        scanf("%d",&s[i]);
    
        if(s[i] <= 0)
        {
        s[i]=100;
       
        }
        printf("%d ",s[i]);
    }
}    