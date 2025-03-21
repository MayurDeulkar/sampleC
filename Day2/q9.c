#include <stdio.h>
#include <conio.h>
int main() 
{
    int employeeID;
    float workedHours, perHour, salary;

    printf("Enter Employee ID: ");
    scanf("%d", &employeeID);

    printf("Enter total worked hours in a month: ");
    scanf("%f", &workedHours);

    printf("Enter amount received per hour: ");
    scanf("%f", &perHour);

    salary = workedHours * perHour;

    printf("\nEmployee ID: %d\n", employeeID);
    printf("Salary: Rs.%.2f\n", salary);
}
