#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100], ch; 
    int i, j, l; 
    
    printf("Input the string : ");
    gets(str);
    l = strlen(str); 
   
    for (i = 1; i < l; i++) 
    {
        for (j = 0; j < l - i; j++) 
        {
            if (str[j] > str[j + 1]) 
            { 
                ch = str[j]; 
                str[j] = str[j + 1];
                str[j + 1] = ch;
            }
        }
    }

    printf("\nAfter sorting the string appears like :"); 
    printf("%s", str);
	
}