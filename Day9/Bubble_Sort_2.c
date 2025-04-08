#include<stdio.h>
int main()
{
    int arr[20],i,j,s,a,temp=0;
    printf("Enter the length of Array:");
    scanf("%d",&s);
    printf("\nEnter the Array elements:");
    for(i=0; i<=s-1; i++)
    {
        scanf("%d",&arr[i]);
    }
    for( i=0;i<=s-1; i++)
        {
            for( j=0; j<=s-1-i; j++)
            {
                if(arr[j]> arr[j+1])
                {
                temp=arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
                } 
            }
        }
        for(i=0; i<=4;i++)
        {
            for(j=0; j<=2; j++)
            {
                printf("%d ",arr[a]);
                a++;
            }
            printf("\n");
            
        }
}