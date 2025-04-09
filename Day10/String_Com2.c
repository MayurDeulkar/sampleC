#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char name[20],name2[20];
    printf("Enter the String1:");
    gets(name);
    printf("Enter the String2:");
    gets(name2);

    for(int i=0; name[i]==name2[i] && name[i]=='\0';i++)
    {
    if(name[i] < name2[i])
    {
        printf("1 ");
    }
    else if(name[i] > name2[i])
    {
        printf("-1 ");
    }
    else //(name[i] == name2[i])
    {
        printf("0 ");
    }
}
return 0;
    //printf("\n You Entered the string is: %d",name[i]);
    //printf("\n You Entered the string2 is: %d",name2[i]);
    //printf("\n You Entered the string compare is: %d",strcmp(name,name2));

}