#include <stdio.h>
#include <string.h>

int main() 
{
    char name[50], temp; 
    int n,i, j; 
    printf("Enter the string length:");
    scanf("%d",&n);
    printf("Enter the String:");
    for(int i=0; i<=n; i++)
    {
        scanf("%c",&name[i]);
    }

    for (i = 1; i <= n; i++) 
    {
        for (j = 0; j <= n - i; j++) 
        {
            if (name[j] > name[j + 1]) 
            { 
                temp = name[j];
                name[j] =name[j + 1];
                name[j + 1] =temp;
            }
        }
    }

    printf("\nThe strings appear after sorting:"); 
    for (i = 0; i <= n; i++) 
    {
        printf("%c ", name[i]);

    }
}