#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the two Numbers: ");
    scanf("%d,%d",&a,&b);

    if(a<b)
    {
        printf("Number is in Ascending order");
    }
    else
    {
        printf("Number is in Descending order");
    }
}