#include<stdio.h>
int main()
{
    int a[3]={1,2,3};
    int b[3]={6,7,8};
    int s[3];
   printf("New Array formed by Arr1 & Arr2 is: ");
    for(int i=0; i<=1; i++)
    {
        
                s[i]=a[i];
                printf("%d ",s[i]);
    }

    for(int i=0; i<1; i++)
    {
       
                s[i]=b[i];
                printf("%d ",s[i]);
    }
  
}