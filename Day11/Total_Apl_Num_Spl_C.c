#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    int alp=0,num=0,spl=0;
    printf("Enter the String:");
    gets(arr);
    for(int i=0; arr[i]!='\0'; i++)
    {
        if(arr[i]>='a' && arr[i]<='z' || arr[i]>='A' && arr[i]<='Z')
        {
            alp++;
                if(arr[i] ==' ')
                {
                    alp--;
                }
        }
        else if(arr[i]>='0' && arr[i]<='9')
        {
            num++;
                if(arr[i] ==' ')
                {
                    num--;
                }
        }
        else{
            spl++;
                if(arr[i] ==' ')
                {
                    spl--;
                }
        }
    }
    printf("\nTotal No. of Alphabets is:%d",alp);
    printf("\nTotal No. of Numbers is:%d",num);
    printf("\nTotal No. of Special Character is:%d",spl);
}