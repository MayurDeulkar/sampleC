#include<stdio.h>
int main()
{
    int a[10],temp=0,i,j,k;
    printf("Enter the array elements:");
    for(int i=0; i<=5; i++)
    {
        scanf("%d",&a[i]);
    }
        for( i=0;i<=5; i++)
        {
            for( j=0; j<=5-i; j++)
            {
                if(a[j]> a[j+1])
                {
                temp=a[j];
                a[j]= a[j+1];
                a[j+1] = temp;
                } 
            }
        }
        for(int i=0; i<=5;i++)
        {
            printf("%d ",a[i]);
        }
    return 0;
}