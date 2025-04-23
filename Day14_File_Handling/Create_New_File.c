#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    fp = fopen("file.txt", "w");

    if (fp == NULL) 
    {
        printf("The file is not opened. The program will "
               "exit now");
        exit(0);
    }
    else {
        printf("The file is created Successfully.");
    }
}
