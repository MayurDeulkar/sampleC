#include<stdio.h>
#include<string.h>
int main()
{
    char name[20],name2[20];
    printf("Enter the String1:");
    scanf("%s",&name);
    printf("Enter the String2:");
    scanf("%s",&name2);
    printf("\n You Entered the string is: %s",name);
    printf("\n You Entered the string compare is: %d",strcmp(name,name2));

}