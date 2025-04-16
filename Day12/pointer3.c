#include<stdio.h>
#include<string.h>
int main()
    {
        int arr[20];
        int n,*p ;
        p=&arr[0];
        printf("Enter the Array Length:");
        scanf("%d",&n);
        printf("Enter the Array Elements:");
        for(int i=0; i<=n-1; i++)
        {
            scanf("%d",&arr[i]);
        }

        for(int i=0;i<=n-1;i++)
        {
            printf("%d ",*p);
            p++;
        }

    }