#include<stdio.h>
int main()
{
    int arr[10][10];
    printf("Enter the array elements:");

    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}