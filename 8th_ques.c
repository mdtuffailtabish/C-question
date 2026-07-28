/*Write a program to convert temperature from Celsius to Fahrenheit.*/
#include<stdio.h>
int main(){
  float celsius,fehrenheit;
  printf("enter temperature in celsius:");
  scanf("%f",&celsius);
  fehrenheit=32+(9.0*celsius)/5;
  printf("temprature in fehrenheit is %f",fehrenheit);
    return 0;
}