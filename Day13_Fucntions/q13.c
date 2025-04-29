#include<stdio.h>

//with no returntype with argument

void getdata(int c)
{
    printf("%d",c);
}
int main()
{
    int a,b,x;
    printf("Enter the numbers:");
    scanf("%d %d",&a ,&b);
    x=a+b;
    getdata(x);
}
