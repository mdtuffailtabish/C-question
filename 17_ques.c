/*Write a program to accept a number and check whether it is even or odd (Without using
if-else and % operator).*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%s\n", (num & 1) ? "Odd" : "Even");

    return 0;
}
