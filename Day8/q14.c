#include<stdio.h>
int main()
{
    int a[3]={1,2,3};
    int b[3]={6,7,8};
    int s[3];
   printf("New Array formed by Arr1 & Arr2 is: ");
    for(int i=0; i<=2; i++)
    {
        if(i>0)
        {
            if(i<2)
            {
                s[i]=a[i];
               
                printf("%d ",s[i]);
            }
        }        
    }

    for(int i=0; i<=2; i++)
    {
       if(i>0)
       {
        if(i<2)
        {
            s[i]=b[i];
            printf("%d ",s[i]);
        }
       } 
    }
    printf("%d ",s[3]= a[1]+b[1]) ; 
}