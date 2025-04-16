#include<stdio.h>
int main()
{
    int a[10]={2,4,8,7,12};

    int *p1;
    //char *p1;
    p1 = &a[0];
    for(int i=1; i<=5; i++)
    {
        printf("\n%d ",*p1);
        p1++;
    }
}