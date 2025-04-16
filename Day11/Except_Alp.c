#include<stdio.h>
#include<string.h>
int main()
{
    char arr[50];
    printf("Enter the String:");
    gets(arr);
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]>='a' && arr[i]<='z' || arr[i]>='A' && arr[i]<='Z')
        {
            printf("%c",arr[i]);
        }
    }
}