/*A trekker is crossing a desert. He has a canteen with a specific capacity in liters. He
drinks 250ml of water every 1 kilometer. Your task is to take input of canteen capacity
in liters and the total distance of the trek in kilometers and print yes if he has enough
water to finish the trek. If not, print how many additional liters he needs to carry*/
#include <stdio.h>

int main() {
    float capacityLiters,  distanceKm;
    float waterNeededLiters, additionalLiters;

    printf("Enter canteen capacity (in liters): ");
    scanf("%f", &capacityLiters);

    printf("Enter total distance of trek (in km): ");
    scanf("%f", &distanceKm);

    waterNeededLiters = distanceKm * 0.25;  // 250 ml = 0.25 liters per km

    if (capacityLiters >= waterNeededLiters) {
        printf("Yes\n");
    } else {
        additionalLiters = waterNeededLiters - capacityLiters;
        printf("No\n");
        printf("Additional liters needed: %.2f\n", additionalLiters);
    }

    return 0;
}
