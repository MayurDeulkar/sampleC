#include<stdio.h>
int main()
{
    int a,b;
    int *p,*q;
    a=5;
    b=10;
    p = &a;
    q = &b;

    if(*p<*q)
    {
        printf("Second Number is maximum");
    }
    else{
        printf("First number is maximum");
    }
}