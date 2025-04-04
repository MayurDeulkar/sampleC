#include<stdio.h>
int main()
{
    int arr[4]={1,2,3,4};
    printf("Given Array: ");
    for(int j=0; j<=3; j++)
    {
        printf("%d ",arr[j]);
    }
    printf("\nNew Array: ");

    for(int i=3; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
}