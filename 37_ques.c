/*Write a program to calculate the free number of cups the user gets for a specified number
of cups bought by the user. In this particular case, the user gets 1 cup free for every 6 cups*/
#include <stdio.h>

int main() {
    int cupsBought, freeCups, totalCups;

    printf("Enter the number of cups bought: ");
    scanf("%d", &cupsBought);

    freeCups = cupsBought / 6;
    totalCups = cupsBought + freeCups;

    printf("Total cups including free cups: %d\n", totalCups);

    return 0;
}
