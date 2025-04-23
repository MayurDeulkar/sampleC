#include <stdio.h>
#include <string.h>

int main()
{
    FILE* filePointer;

    char dataToBeWritten[50] = "GeeksforGeeks-A Computer "
                               "Science Portal for Geeks";

    filePointer = fopen("file.txt", "a+");

    if (filePointer == NULL) 
    {
        printf("File.txt file failed to open.");
    }
    else 
    {

        printf("The file is now opened.\n");

        if (strlen(dataToBeWritten) > 0) 
        {
            fputs("\n", filePointer);
            fputs(dataToBeWritten, filePointer);
            fputs("\n", filePointer);
        }

        fclose(filePointer);

        printf("Data successfully written in file "
               "File.txt\n");
        printf("The file is now closed.");
    }
}
