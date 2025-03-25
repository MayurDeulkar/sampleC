#include<stdio.h>

int main()
{
    int marks,count=0;
    float total=0.0, average;

  // printf("\n Enter the marks of students:");

   while(5)
   {
    printf("\n Enter marks of students: ");
    scanf("%d",&marks);

    if(marks <=0)
    {
        break;
    }
    total += marks;
    count++;

    if(count >0)
    {
        average = total/ count;
        printf("\n The average marks of mathematics is: %.2f",average);
    }
    else{
        printf("\n No marks entered");
    }

    return 0;
   }
   
}