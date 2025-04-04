#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two Numbers: ");
    scanf("%d %d",&a,&b);

    a = a+b;
    b= a-b;
    a= a-b;

    printf("\nAfter Swap : %d %d", a,b);
}