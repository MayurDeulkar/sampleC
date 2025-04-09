#include<stdio.h>
#include<string.h>
int main()
{
    int l=0,l1=0,l2=0,s=0;
    char name[20],name2[20];
    printf("Enter the String1:");
    gets(name);
    printf("Enter the String2:");
    gets(name2);

    l=strlen(name);
    l1=strlen(name2);
    l2=l+l1;
    for(int i=l; i<=l2; i++)
    {
        name[i]=name2[s];
        s++;
    }
    printf("Concat String is: %s ",name);
} 