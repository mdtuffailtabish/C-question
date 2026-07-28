/*. Write a program to accept two numbers and check whether they are equal or not.*/
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if(a==b){
        printf("numbers are equall");
    }
    else{
        printf("numbers are not equall");
    }


    return 0;
}
