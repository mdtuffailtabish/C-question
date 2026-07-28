/*Write a program to accept the length and breadth of a rectangle and calculate its area.*/
#include<stdio.h>
int main(){
  float length,breadth;
  printf("enter lendth of reactange:");
  scanf("%f",&length);
  printf("enter breadth of reactange:");
    scanf("%f",&breadth);

    float area=length*breadth;
    printf("area of reactangle is :%.2f",area);
    return 0;
}