/*M allows withdrawal only if:
 Withdrawal amount is a multiple of 100, and
 Account balance after withdrawal remains >= Rs. 500
Write a program to accept balance and withdrawal amount and decide whether the
transaction is successful or failed.
*/
#include <stdio.h>

int main() {
    float balance, withdrawal;

    printf("Enter account balance: ");
    scanf("%f", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%f", &withdrawal);

    if ((int)withdrawal % 100 == 0 && (balance - withdrawal) >= 500) {
        printf("Transaction Successful\n");
    } else {
        printf("Transaction Failed\n");
    }

    return 0;
}
