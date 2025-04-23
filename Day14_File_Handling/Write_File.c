#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fptr; 
        fptr = fopen("file.txt", "w");
    fprintf(fptr, "%s %s %s %d", "We", "are", "in", 2025);
    fputs('\0',fptr);

    if (fptr == NULL) 
    {
        printf("The file is not opened. The program will "
               "now exit.");
        exit(0);
    }
    fclose(fptr);
        printf("Data successfully written in file "
               "file.txt\n");
        printf("The file is now closed.");
}
