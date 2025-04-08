#include<stdio.h>
int main()
{
    int arr[10],temp=0,i,j;
    printf("Enter the array elements:");
    for(int i=0; i<=5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for( i=0;i<=5; i++)
    {
        for( j=i+1; j<=5; j++)
        {
            if(arr[i]> arr[j])
            {
                temp=arr[i];
                arr[i]= arr[j];
                arr[j] = temp;
            }
            
        }
        printf("%d  ",arr[i]);
    }
    return 0;
}