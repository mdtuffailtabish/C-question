/*Write a program to accept two numbers and display their addition, subtraction,
multiplication, and division.*/
#include<stdio.h>
int main(){
   int a,b;
   printf("enter 1st number:");
   scanf("%d",&a);
   printf("enter 2nd number:");
   scanf("%d",&b);
   int add=a+b;
   int sub=a-b;
   int mul=a*b;
   int divide=a/b;
   printf("%d",add);
   printf("%d",sub);
   printf("%d",mul);
   printf("%d",divide);
    return 0;
}