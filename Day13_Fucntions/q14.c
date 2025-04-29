#include<stdio.h>

//with return type with argument

int getdata(int x)
{
    int a,b;
    printf("Enter the number:");
    scanf("%d %d",&a,&b);
    x=a+b;
    return x;
}
int main()
{
    int c,d;
    c=getdata(d);
    printf("%d",c);
}