#include<stdio.h>
int main()
{
    int s[6],sm;
    printf("Enter the array elements: ");
    
    sm=s[0];
    for(int i=0; i<=5; i++)
    {
        scanf("%d",&s[i]);
        if(sm > s[i])
        {
            sm = s[i];
        }
    }
    printf("\nThe Smallest value in array is: %d",sm);

}