#include <stdio.h>
#include<conio.h>
int main() 
{
    int p, q, r, s;

    printf("Enter four integers (p, q, r, s): ");
    scanf("%d %d %d %d", &p, &q, &r, &s);
  
    if(r >0 && s>0)
    {
        if(p%2 == 0)
        {
            if((q>r) && (s>p))
            {
                if((r+s)>(p+q))
                {
                    printf("\nCorrect values");
                }
            }
        }
       
    } 
    else 
    {
        printf("\nWrong values");
    }
}

