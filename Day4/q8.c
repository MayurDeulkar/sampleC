#include<stdio.h>

int main()
{
    int n,a,b;
    printf("Enter the Number:");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        a=i*i;
        b=i*i*i;
        printf("\n %d Square is: %d",i,a);
        printf("\t %d Cube is: %d",i,b);
    }
}