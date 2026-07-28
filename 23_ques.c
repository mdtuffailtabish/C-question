/*Write a program to take a character (In Python string) as input and check if it is uppercase
or lowercase.
*/
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("%s\n", (ch >= 'A' && ch <= 'Z') ? "Uppercase" :
                   (ch >= 'a' && ch <= 'z') ? "Lowercase" : "Not an alphabet");

    return 0;
}
