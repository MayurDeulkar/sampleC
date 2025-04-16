#include<stdio.h>
int main()
{
    int a,b,c;
    int *p,*q,*r;
    a=5;
    b=10;
    p = &a;
    q = &b;
    r = &c;

    *r= *p + *q;
    printf("%d",*r);
}