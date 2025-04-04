#include<stdio.h>
int main()
{
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    int s[3],sum[3];

    for(int i=0; i<=2; i++)
    {
        s[i]=a[i]+b[i];
       
        if(a[i]>=b[i]&& a[i]>=s[i])
        {
            printf("a=%d ",a[i]);
        }
        else if(b[i]>=a[i]&& b[i]>=s[i])
        {
            printf("b=%d ",b[i]);
        }
        else{
            printf("%d ",s[i]);
        }

    }
}