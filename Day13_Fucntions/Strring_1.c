#include<stdio.h>

//with no returntype with no argument

void getdata();
int main()
{
    getdata();
}

void getdata()
{
    char arr[20];
    printf("Enter the string:");
    gets(arr);

    printf("Entered String is: %s",arr);
}