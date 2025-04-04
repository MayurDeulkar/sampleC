#include<stdio.h>
int main()
{
    int a[4]={1,2,3,4};
    int b[4]={6,7,8,9};
    int s[4];
   printf("New Array formed by Arr1 & Arr2 is: ");
    for(int i=0; i<=4; i++)
    {
        if(i>=1)
        {
            if(i<=2)
            {
                s[i]=a[i];
                printf("%d ",s[i]);
            }
        }
    }

    for(int i=0; i<=4; i++)
    {
        if(i>=1)
        {
            if(i<=2)
            {
                s[i]=b[i];
                printf("%d ",s[i]);
            }
        }
    }
  
}