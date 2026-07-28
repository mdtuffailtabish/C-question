/*You are programming the logic for an old ATM that only dispenses cash in
denominations of 500, 100, and 10. The bank wants to minimize the number of notes
given to a customer. However, there is a catch: The machine cannot dispense amounts
that are not multiples of 10. Output will be number of 500 notes, 100 notes and 10 notes*/
#include <stdio.h>

int main() {
    int amount;
    int notes500, notes100, notes10;

    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    if (amount % 10 != 0) {
        printf("Invalid amount. Amount must be multiple of 10.\n");
        return 0;
    }

    notes500 = amount / 500;
    amount = amount % 500;

    notes100 = amount / 100;
    amount = amount % 100;

    notes10 = amount / 10;

    printf("500 notes: %d\n", notes500);
    printf("100 notes: %d\n", notes100);
    printf("10 notes: %d\n", notes10);

    return 0;
}
