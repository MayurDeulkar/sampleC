#include<stdio.h>

//with no returntype with no argument

void getdata();
int main()
{
    getdata();
}

void getdata()
{
    int a,b,c;
    printf("Enter the numbers:");
    scanf("%d %d",&a ,&b);
    c=a+b;
    printf("\n%d",c);
}