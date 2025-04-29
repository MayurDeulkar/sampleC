#include<stdio.h>

//with returntype with no argument

int getdata();
int main()
{
    int c;
    c=getdata();
    printf("\n%d",c);
}

int getdata()
{
    int a,b,x;
    printf("Enter the numbers:");
    scanf("%d %d",&a ,&b);
    x=a+b;
    return x;
    
}