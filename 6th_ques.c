/*Write a program to accept the radius of a circle and calculate its area*/
 #include<stdio.h>
int main(){
    float radius;
    printf("enter radius:");
    scanf("%f",&radius);
    float area= 3.141*radius*radius;
    printf("%.2f",area);
    return 0;
}