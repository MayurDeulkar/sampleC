#include<stdio.h>
int main()
{
    char s1[20],s2[20];
    printf("Enter String 1:");
    gets(s1);
    printf("\nCopy string is:");
    for(int i=0; i<s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
        printf("%c",s2[i]);
    }
}