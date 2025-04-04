#include<stdio.h>
int main()
{
    float sum=0;
    int b=3,n,i;
    printf("Enter the Number:");
    scanf("%d",&n);
    for( i=1; i<=n; i++)
    {
         if(i == 1)
        {
            printf("S = 1 + ");
        }

        if(i%2 ==0)
        {
            if(b%2!=0)
            {
                if(i == 6)
                {
                    continue;
                }
                else
                {
                    printf("(%d/%d) + ",b,i);
                }  
            }
            b+=2;
           
        }
        sum =sum +(b/i);
    }
    printf("\nThe sum of given series is %.2f",sum);
}