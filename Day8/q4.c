#include<stdio.h>
int main()
{
    int s[5]={1,2,3,4,5};
    printf("Reverse Array: ");
    for(int i=4;i>=0;i--)
    {
        printf("%d ",s[i]);
    }
}