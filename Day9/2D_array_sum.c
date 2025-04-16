#include<stdio.h>
int main()
{
    int arr[10][10],arr2[10][10],arr3[10][10];
    printf("Enter the array1 elements:");
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

    printf("Enter the array2 elements:");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    printf("Sum of array1&2 is:\n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            arr3[i][j]=arr[i][j]+arr2[i][j];
        }
    }

    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
}