#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10],s,i,count=0;

    printf("\nEnter the Array Elements:");
    for( i=0; i<=5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the Number to search:");
    scanf("%d",&s);
    for(i=0; i<=5; i++)
    {
        if((s == arr[i]))
        {
           printf("\n%d is present at location %d",s,i);
        }
        else {
           count++;
        }
    }
   
        if(count == 6)
        {
            printf("\n%d is not present at location",s);
        }
        else{
           return 0;
        }

}