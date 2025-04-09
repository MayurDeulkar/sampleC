#include<stdio.h>
int main()
{
    int arr[10],beg,e,s,mid,end,count=0;
    int flag=0,position;
    printf("Enter the length of array:");
    scanf("%d",&e);
    printf("Enter the Array Elements:\n");
    for(int i=0; i<=e-1; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the Number to search:");
    scanf("%d",&s);
    beg =0;
    end = e-1;

   for(int i=0; i<=e-1; i++) 
    {
        mid = (beg + end) / 2;

        if (arr[mid] == s) 
        {
            flag=1;
            position=mid;
        } 
        else if (arr[mid] < s) 
        {
            beg = mid + 1;
        } 
       else if(arr[mid] > s)
        {
            end = mid - 1;
        }   
    }

   if(flag == 1 )
   {
    printf("\n %d found at position %d",s,position);
   }
   else
   {
    printf("\n Not present in array");
   }
}