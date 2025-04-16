#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter the String:");
    gets(str);

    for(int i=strlen(str); i>=0; i--)
    {
        printf("%c ",str[i]);
    }
}