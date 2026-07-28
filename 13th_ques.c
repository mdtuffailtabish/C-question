/*Write a program to accept a number and check whether it is positive or negative or zero
(Without using if-else).*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    char *result = (num > 0) ? "Positive" : (num < 0) ? "Negative" : "Zero";

    printf("The number is: %s\n", result);

    return 0;
}
