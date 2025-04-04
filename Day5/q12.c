#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);

    a<<=2;
    b=a;
    printf("\nLeft shifted data by two bits is: %d",b);
}