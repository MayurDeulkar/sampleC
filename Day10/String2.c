#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int i=0,l;
    printf("Enter the Array:");
    scanf("%s",name);
    l=strlen(name);
   
    printf("\n You Entered The Array is:");
    for(int i=0; i<=l;i++)
    {
            printf(" %c",name[i]);
    }
}