#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,0};
    int s[5];
   printf("New Array formed by Arr1 & Arr2 is: ");
    for(int i=0; i<=4; i++)
    {
        if(i>=1)
        {
            if(i<=3)
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