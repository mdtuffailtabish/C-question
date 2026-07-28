/*Write a program to calculate final price after discount:
Above 5000: 20% discount
2000-5000: 10% discount
Below 2000: 5% discount
*/
#include <stdio.h>

int main() {
    float price, discount = 0.0, finalPrice;

    printf("Enter total price: ");
    scanf("%f", &price);

    if (price > 5000) {
        discount = 0.20 * price;
    } 
    else if (price >= 2000 && price <= 5000) {
        discount = 0.10 * price;
    } 
    else {
        discount = 0.05 * price;
    }

    finalPrice = price - discount;

    printf("Discount: %.2f\n", discount);
    printf("Final Price: %.2f\n", finalPrice);

    return 0;
}
