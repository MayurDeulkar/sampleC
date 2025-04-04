#include <stdio.h>
#include <string.h>

int main() 
{
    char str[20];
    int len, i=0;
    
    printf("Enter a string: ");
    scanf("%s",str);

    len = strlen(str);
    
    printf("\n Revered String by For LOOP: ");
    for(i= len; i>=0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    printf("\n Revered String by while LOOP: ");
    i=len;
    while(i>=0)
    {
        printf("%c", str[i]);
        i--;
    }
    printf("\n");

    printf("\n Revered String by Do-While LOOP: ");
    i= len;
    do
    {
        printf("%c", str[i]);
        i--;
    }while(i>=0);
    printf("\n");
    
}
