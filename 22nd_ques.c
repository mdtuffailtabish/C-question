/*Write a program to take a character (In c string) as input and check if it is an
alphabet, digit, or special character.*/
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("%s\n", (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ? "Alphabet" :
                   (ch >= '0' && ch <= '9') ? "Digit" : "Special Character");

    return 0;
}
