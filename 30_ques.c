/*Write a program to find the second smallest of three numbers.*/
#include <stdio.h>

int main() {
    int a, b, c, secondSmallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a < b && a > c) || (a < c && a > b))
        secondSmallest = a;
    else if ((b < a && b > c) || (b < c && b > a))
        secondSmallest = b;
    else
        secondSmallest = c;

    printf("The second smallest number is %d\n", secondSmallest);

    return 0;
}
