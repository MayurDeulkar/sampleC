#include<stdio.h>
int main()
{
    char name[20];
    int count=0;
    printf("Enter the String:");
    gets(name);
    printf("\n You Entered the string is: %s",name);

    for(int i=0; name[i]!='\0'; i++)
    {
            count++;        
    }

    printf("\n You Entered the string length is: %d",count);
}