/*Write a program to accept marks of five subjects and calculate the total marks and
percentage.*/
#include<stdio.h>
int main(){
  float hindi,english,math,gk,science;
  printf("enter mark in hindi");
  scanf("%f",&hindi);
  printf("enter mark in english ");
  scanf("%f",&english);
  printf("enter mark in math ");
  scanf("%f",&math);
  printf("enter mark in science ");
  scanf("%f",&science);
  printf("enter mark in gk");
  scanf("%f",&gk);
     float total = hindi + english + math + science + gk;
    float percentage = (total / 500) * 100;  

    printf("\nTotal marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    return 0;
}