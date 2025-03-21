#include <stdio.h>
#include <conio.h>
int main() {

    int input = 0, negative = 0, positive = 0;

    for(int i = 0; i < 5; i++) {
        printf("Enter a number: ");
        scanf("%d", &input);

        if(input >= 0) {
            positive++;
        } else {
            negative++;
        }
    }

    printf("Postive numbers are: %d\n", positive);
    printf("Negstive numbers are: %d\n", negative);
    return 0;
}