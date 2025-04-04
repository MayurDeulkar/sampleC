#include<stdio.h>
int main()
{
    int b[3]={5,7,3};
    printf("New Array: ");
    for(int i=0; i<=2; i++)
    {
          if((b[1]==5 && b[2]==7) || (b[0]==5 && b[1]==7))
            {
                if(b[i]==7)
                {
                    b[i]=1;
                }
              
            }
             printf("%d ",b[i]);
    }
}