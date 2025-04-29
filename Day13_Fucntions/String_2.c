#include<stdio.h>

//with returntype with no argument

int getdata();
int main()
{
    char c;
    c=getdata();
    printf("\n%s",c);
}

int getdata()
{
    char arr[30];
    printf("Enter the String:");
    gets(arr);
    return arr;
    
}