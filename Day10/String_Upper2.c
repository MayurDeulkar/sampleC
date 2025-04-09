#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("Enter the String:");
    scanf("%s",&name);
    printf("\nIn Uppercase:");
    for(int i=0; name[i]!='\0'; i++)
    {
        if(name[i]>='a'&& name[i]<='z')
        {
            name[i]= name[i]-32;
        }
        printf("%c",name[i]);
    }

}