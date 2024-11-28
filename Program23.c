// Enter basic salary from the user. Write a program to calculate total salary on the following conditions:-
// Basic Salary      DA   HRA
// <=2000            10%  20%
// >2000 && <=5000   20%  30%
// >5000 && <=10000  30%  40%
// >10000            50%  50%

#include <stdio.h>

int main() {
    float basic, total;
    printf("Enter the basic salary: ");
    scanf("%f", &basic);
    if (basic <= 2000) 
    {
        total = basic + (0.10 * basic) + (0.20 * basic);
    } 
    else if (basic > 2000 && basic <= 5000) 
    {
        total = basic + (0.20 * basic) + (0.30 * basic);
    } 
    else if (basic > 5000 && basic <= 10000) 
    {
        total = basic + (0.30 * basic) + (0.40 * basic);
    } 
    else 
    { 
        total = basic + (0.50 * basic) + (0.50 * basic);
    }

    printf("The total salary is: %.2f\n", total);
    return 0;
}
