/*Write a program to find the last digit of a number without using % modulus operator.
*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int lastDigit = num - (num / 10) * 10;
    printf("Last digit of the number is: %d\n", lastDigit);

    return 0;
}
