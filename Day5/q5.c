#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);

    printf("\nAll divisors of %d are: ",n);
    for(int i=1;i<=n; i++)
    {
        if(n%i ==0)
        {
            printf("%d ",i);
        }
    }
}