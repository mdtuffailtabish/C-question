/*Write a program to check whether a given year is a leap year or not*/
#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    printf("%s\n", (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0) ? 
                   "Leap year" : "Not a leap year");

    return 0;
}

