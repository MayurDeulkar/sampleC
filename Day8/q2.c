#include<stdio.h>

int main()
{
    int a[2]={1,2};
    int b[2]={1,1};
        if(a[0] == b[0])
        {
        printf("True First element are equal");
        }
     else if(a[1] == b[1])
        {
        printf("True last element are equal");
        }
        else
        {
            printf("Not Equal");
        }
}