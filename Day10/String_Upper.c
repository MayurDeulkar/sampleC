#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("Enter the String:");
    scanf("%s",&name);
    printf("\n You Entered the string is: %s",name);
    printf("\n You Entered the string Upper is: %s",strupr(name));

}