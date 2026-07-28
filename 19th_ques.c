/* Write a program to delete the last two digits of any user given input number*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = num / 100;  
    printf("Number after deleting last two digits: %d\n", result);

    return 0;
}
