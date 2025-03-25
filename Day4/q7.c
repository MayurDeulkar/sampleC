#include<stdio.h>

int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        printf("\t %d",i);
        if(i%3 == 0)
        {
            printf("\n");
        }
    }
}