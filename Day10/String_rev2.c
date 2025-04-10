#include<stdio.h>
#include<string.h>

/*void reverseString(char *str) {
    int i = 0; j = strlen(str);

    while(str[i] <= str[j]) {
        
        swap(str[i], str[j]);
        i++;
        j--;
    }
}*/

int main()
{
    char name[20],name2[20] = " ";
    int l = 0,s=0;
    printf("Enter the Array:");
    scanf("%s",name);

    l=strlen(name);

    printf("\n You Entered The Array is:");
    for(int i=l; i>=0; i--)
    {

        name2[s] +=name[i];
           s++;
    }  
    printf("%s",name2);

}