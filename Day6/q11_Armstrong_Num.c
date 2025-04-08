#include <stdio.h>
int main() 
{
    int num, og, remainder, res = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    og = num;

    //While Loop
    while (og != 0) {
       
        remainder = og % 10;
       res += remainder * remainder * remainder;
       og /= 10;
    }
    if (res == num){
        printf("%d is an Armstrong number By While Loop", num);
    }
    else{
        printf("%d is not an Armstrong number By While Loop", num);
    }

    //FOr Loop
    remainder=0,res=0;
    for (og=num ;og != 0; og/=10) {
       
        remainder = og % 10;
       res += remainder * remainder * remainder;
    }

    if (res == num){
        printf("\n%d is an Armstrong number By For Loop", num);
    }
    else{
        printf("\n%d is not an Armstrong number By For Loop", num);
    }  
    
    //DO-While Loop
    remainder=0,res=0;
    og=num;
     do{
       
        remainder = og % 10;
       res += remainder * remainder * remainder;
       og /= 10;
    }while (og != 0);
    if (res == num){
        printf("\n%d is an Armstrong number by Do-while loop", num);
    }
    else{
        printf("\n%d is not an Armstrong numberby Do-while loop", num);
    }
}