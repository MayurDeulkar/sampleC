#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter the Array:");
    for(int i=0;i<=19;i++)
    {
        if(name[i] =='\0')
        {
            break;
        }
        else{
            scanf("%c",&name[i]);
        }
       
    }
   
    printf("\n You Entered The Array is:");
    for(int i=0;i<=19;i++)
    {
        if(name[i] =='\0')
        {
            break;
        }
        else{
            printf("%c",name[i]);
        }
          
        //printf("%d ",name[i]);
        
    }
   
   
}