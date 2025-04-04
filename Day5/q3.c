#include<stdio.h>
int main()
{
    float sum=0,n,i;
   
    printf("Enter the last digit: ");
    scanf("%f",&n);
    for( i=1; i<=n; i++)
    {
        sum =sum +(1/i);
        if(i == 1)
        {
            printf("S = 1 + ");
        }
        else
        {
            printf("(1/%.f) + ",i);
        }
    }
    printf("\nThe sum of given series is %.2f",sum);
}