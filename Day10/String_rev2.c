#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int l;
    printf("Enter the Array:");
    scanf("%s",name);

    l=strlen(name);

    printf("\n You Entered The Array is:");
    for(int i=l; i>=0; i--)
    {
            printf(" %c",name[i]);
    }  
}