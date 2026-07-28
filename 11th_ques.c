/*Write a program to accept two numbers and determine which number is greater (Without
using if-else).*/
#include<stdio.h>
int main(){
  int a,b;
  printf("enter 1st number:");
  scanf("%d",&a);
  printf("enter 2nd number:");
  scanf("%d",&b);
  int max = (a > b) ? a : b;  
    printf("Maximum number is: %d\n", max);
    return 0;
}