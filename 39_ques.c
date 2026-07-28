/*Write a program to calculate the electricity bill based on the following conditions:
First 100 units → Rs. 2 per unit
 Next 100 units → Rs. 3 per unit
Above 200 units → Rs. 5 per unit*/
#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter the number of electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 2;
    } else if (units <= 200) {
        bill = 100 * 2 + (units - 100) * 3;
    } else {
        bill = 100 * 2 + 100 * 3 + (units - 200) * 5;
    }

    printf("Total electricity bill: Rs. %.2f\n", bill);

    return 0;
}
