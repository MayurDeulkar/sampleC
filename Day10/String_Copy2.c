#include<stdio.h>
int main()
{
    char s1[20],s2[20]={"may"};
    printf("Enter String 1:");
    scanf("%s",&s1);
    /*for(int i=0; i<s1[i]!='\0';i++)
    {
        scanf("%c",&s1[i]);
    }*/
    printf("\nCopy string is:");
    for(int i=0; i<s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
        printf("%c",s2[i]);
    }
}