#include<stdio.h>
#include<string.h>
int main()
{
     char arr[50];
     char vow[5]="aeiou";
     char vow2[5]="AEIOU";
     int total=0,count=0,consonent=0;
     printf("Enter the String:");
     gets(arr);

    for(int i=0; arr[i]!='\0'; i++)
    {
        if(arr[i] != '\0')
        {
            total++;
                if(arr[i] ==' ')
                {
                    total--;
                }
        }
        for(int j=0;j<=4; j++)
        {
            if(arr[i] == vow[j] ||arr[i] == vow2[j])
            {
                count++;
            }
        }
    }
    consonent= total-count;
    printf("\nTotal No. of words:%d",total);
    printf("\nNo. of Vowels present is:%d",count);
    printf("\nNo. of consonet present is:%d",consonent);
}