#include<stdio.h>
int main()
{
    int a[10]={2,4,8,7,12};

    int *p1;
    //char *p1;
    p1 = &a[0];
    for(int i=0; i<=4; i++)
    {
        printf("%d ",a[i]);         //values
    }
    printf("\n");

    p1 = &a[0];
    for(int i=1; i<=5; i++)
    {
        printf("%d ",&a[i]);        //address of values in int increse by 4 bytes
    }
    printf("\n");

    p1 = &a[0];
    for(int i=1; i<=5; i++)
    {
        printf("%d ",p1);           //address of values in int increse by 4 bytes
        p1++;
    }
    printf("\n");

    p1 = &a[0];
    for(int i=1; i<=5; i++)
    {
        printf("%d ",*p1);          //pointer print the values of variable
        p1++;
    }
    printf("\n");

    p1 = &a[0];
    for(int i=1; i<=5; i++)
    {
        printf("%d ",&p1);              //Address of pointer variable
    }
    printf("\n");

    p1 = &a[0];
    for(int i=1; i<=5; i++)
    {
        printf("%d ",*&p1);             //pointer print the address of values in int increse by 4 bytes
        p1++;
    }
}