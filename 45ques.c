/*A university gives scholarship based on average marks and family income. Scholarship
is given if average marks >= 75 and family income <= Rs. 2,00,000. Write a program to
check whether a student gets scholarship or not.*/
#include <stdio.h>

int main() {
    float averageMarks;
    float familyIncome;

    printf("Enter average marks: ");
    scanf("%f", &averageMarks);

    printf("Enter family income: ");
    scanf("%f", &familyIncome);

    if (averageMarks >= 75 && familyIncome <= 200000) {
        printf("Scholarship Granted\n");
    } else {
        printf("Scholarship Not Granted\n");
    }

    return 0;
}
