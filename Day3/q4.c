#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,res;

    printf("Enter the two Numbers:");
    scanf("%d,%d",&a,&b);
    res=a*b;
    if((res>0) && (res!=0))
    {
        printf("\n Numbers are multiplied");
    }
    else
    {
        printf("\n Numbers are not multiplied");
    }
}