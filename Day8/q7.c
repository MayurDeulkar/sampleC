#include<stdio.h>
int main()
{
    int b[2]={15,20};
  
    for(int i=0; i<=6; i++)
    {
        if(i<=1 || i>!1)
        {
               if(b[0]==15 || b[1]==20)
               {
                printf("True ");
                break;
               } 
               else
               {
                printf("\n 15 or 20 are not present");
                break;
               }  
      
        }
        else
        {
            printf("\n Array length is greater than 2");
            break;
        }
    }
}