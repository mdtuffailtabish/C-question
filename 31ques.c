/*Write a program to calculate the gross salary of an employee by accepting basic salary.
(HRA = 20%, DA = 10%)*/
#include <stdio.h>

int main() {
    float basic, HRA, DA, gross;

    printf("Enter the basic salary: ");
    scanf("%f", &basic);

    HRA = 0.20 * basic;  // House Rent Allowance
    DA = 0.10 * basic;   // Dearness Allowance
    gross = basic + HRA + DA;

    printf("Gross salary is: %.2f\n", gross);

    return 0;
}
