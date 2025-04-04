#include<stdio.h>
int main()
{
    int s[7],i;
    printf("Enter the Array elements:");
    for( i=0;i<=6;i++)
    {
        scanf("%d",&s[i]);
    
        if(i > 0)
        {
        s[i]=s[i]*3;
        }
        printf("%d ",s[i]);
    }
}    