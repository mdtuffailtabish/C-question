/*Write a program to accept three numbers and determine which number is greater (Without
using if-else).*/
#include<stdio.h>
int main(){
  int a,b,c;
  printf("enter 1st number:");
  scanf("%d",&a);
  printf("enter 2nd number:");
  scanf("%d",&b);
  printf("enter 3rd number:");
  scanf("%d",&c);
   int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);  
    printf("Maximum number is: %d\n", max);
    return 0;
}