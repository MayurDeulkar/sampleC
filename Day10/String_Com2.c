#include<stdio.h>
#include<string.h>

int main()
{
    int i,count=0,count2=0;
    char name[20],name2[20];
   
    printf("Enter the String1:");
    gets(name);
    printf("Enter the String2:");
    gets(name2);

    for(i=0; name[i]!='\0';i++)
    {
        count += name[i];
    }
    printf("\n%d",count);

    for(i=0; name2[i]!='\0';i++)
    {
        count2 += name2[i];
    }
    printf("\n%d",count2);

   if(count > count2)
     {
        printf("\n1 ");
     }
     else if(count < count2)
     {
         printf("\n-1 ");
     }
     else //(name[i] == name2[i])
     {
         printf("\n0 ");
     }
return 0;
}