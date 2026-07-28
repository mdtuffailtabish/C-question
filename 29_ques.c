/*Write a program to find the smallest of four numbers.*/
#include <stdio.h>

int main() {
    int a, b, c, d, smallest;

    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    smallest = a;

    if(b < smallest) smallest = b;
    if(c < smallest) smallest = c;
    if(d < smallest) smallest = d;

    printf("The smallest number is %d\n", smallest);

    return 0;
}
