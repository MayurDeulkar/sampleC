#include <stdio.h>
#include <conio.h>
int main() {

    int input = 0, negative = 0, positive = 0,sum=0,avg=0;

    for(int i = 0; i < 5; i++) 
    {
        printf("Enter a number: ");
        scanf("%d", &input);

        if(input >= 0) {
            sum += input;
            positive++;
        } else {
            negative++;
        }
    }

    printf("Postive numbers are: %d\n", positive);
    printf("Negstive numbers are: %d\n", negative);
    
    avg = sum/positive;
    printf("\n Average :%d",avg);
    return 0;
}