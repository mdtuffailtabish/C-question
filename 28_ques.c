/*Write a program to find the second largest of three numbers*/
#include <stdio.h>

int main() {
    int a, b, c, secondLargest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a > c && a < b))
        secondLargest = a;
    else if ((b > a && b < c) || (b > c && b < a))
        secondLargest = b;
    else
        secondLargest = c;

    printf("The second largest number is %d\n", secondLargest);

    return 0;
}
