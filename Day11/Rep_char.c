#include<stdio.h>
#include<string.h>
int main()
{
    char arr[50];
    printf("Enter the String:");
    gets(arr);

    for(int i=0; arr[i]!='\0'; i++)
    {
        for(int j=i+1; arr[j]!='\0';j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%c ",arr[j]);
            }
        }
    }

}