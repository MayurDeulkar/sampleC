#include<stdio.h>
#include<string.h>
int main()
{
    char arr[50],arr2[50],a=0;
    a=arr[0];
    printf("Enter the String:");
    gets(arr);
    for(int i=0;arr[i]!='\0';i++)
    {
        if(a>arr[i])
        {
            arr2[i]=arr[i];
        }
    }

    for(int i=0;arr[i]!='\0';i++)
    {
        printf("%c",arr2[i]);
    }
  
}