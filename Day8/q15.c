#include<stdio.h>
int main()
{
    int s[3],temp;
    printf("Enter the array elements:");
    for(int i=0; i<=2; i++)
    {
        scanf("%d",&s[i]);
       
    }
    printf("\n");
        temp = s[0];
        s[0]=s[3-1];
        s[3-1]=temp;

        printf("\nAfter Swapping: ");
        for(int i=0; i<=2; i++)
        {

            printf("%d ",s[i]);
        }
        
}