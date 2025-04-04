#include<stdio.h>
int main()
{
    int a[3]={1,5,2};
    int b[3]={6,0,3};
    int s[3];
   printf("New Array formed by Arr1 & Arr2 is: ");
    for(int i=0; i<=2; i++)
    {
        if(i<1)
        {
                s[i]=a[i];
                printf("%d, ",s[i]);
        }
    }

    for(int i=0; i<=2; i++)
    {
        if(i>1)
        {
                s[i]=b[i];
                printf("%d ",s[i]);
        }
    }
  
}