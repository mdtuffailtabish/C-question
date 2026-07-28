/*Write a program to convert temperature from Fahrenheit to Celsius*/
#include<stdio.h>
int main(){
  float celsius,fehrenheit;
  printf("enter temperature in fehrenheit:");
  scanf("%f",&fehrenheit);
  celsius=(fehrenheit-32)*5.0/9;
  printf("temprature in fehrenheit is %.2f",celsius);
    return 0;
}