#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    int count=0;
    printf("Enter the String:");
    gets(arr);
    for(int i=0; arr[i]!='\0'; i++)
    {
        if(arr[i] != '\0')
        {
            count++;
                if(arr[i] ==' ')
                {
                    count--;
                }
        }
        else
        {
            break;
        }
    }
    printf("\nTotal No. of words is:%d",count);
}