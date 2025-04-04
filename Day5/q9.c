#include<stdio.h>
int swap(int *a,int *b);
int main()
{
    int s[6],temp=0;
    printf("Enter the Array elements:");
    for( int i=0;i<=5;i++)
    {
        scanf("%d",&s[i]);
    }
    printf("\n");

    temp = s[0];
    s[0]=s[5];
    s[5]=temp;

    temp=0;
    temp = s[1];
    s[1]=s[4];
    s[4]=temp;

    temp=0;
    temp = s[2];
    s[2]=s[3];
    s[3]=temp;

    printf("\nAfter Swapping:");
    for(int i=0; i<=5;i++)
    {
        printf("%d ",s[i]);
    }
}