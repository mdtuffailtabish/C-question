/*Write a program to check whether an input alphabet is a vowel or consonant.*/
#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%s\n", (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
                        ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') ? "Vowel" : "Consonant");
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}
