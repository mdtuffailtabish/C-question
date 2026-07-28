/*. Write a program to exchange the last two digits of any user given input number*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int lastDigit = num % 10;
    int secondLastDigit = (num / 10) % 10;
    int remaining = num / 100;

    int result = remaining * 100 + lastDigit * 10 + secondLastDigit;
    printf("Number after exchanging last two digits: %d\n", result);

    return 0;
}
