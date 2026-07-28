/*Write a program to check password strength:
Weak: < 6 chars
Moderate: 6-10 chars with letters only
Strong: 6-10 chars with letters and digits
Very Strong: > 10 chars with letters, digits, special chars*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int i, hasLetter = 0, hasDigit = 0, hasSpecial = 0;
    int length;

    printf("Enter password: ");
    scanf("%99s", password);

    length = strlen(password);

    for (i = 0; i < length; i++) {
        if (isalpha(password[i]))
            hasLetter = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else
            hasSpecial = 1;
    }

    if (length < 6) {
        printf("Weak\n");
    } 
    else if (length <= 10 && hasLetter && !hasDigit && !hasSpecial) {
        printf("Moderate\n");
    } 
    else if (length <= 10 && hasLetter && hasDigit && !hasSpecial) {
        printf("Strong\n");
    } 
    else if (length > 10 && hasLetter && hasDigit && hasSpecial) {
        printf("Very Strong\n");
    } 
    else {
        printf("Weak\n");
    }

    return 0;
}
