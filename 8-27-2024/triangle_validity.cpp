#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three angles of the triangle(in degrees).");
    printf("Angle 1: ");
    scanf("%d",&a);
    printf("Angle 2: ");
    scanf("%d",&b);
    printf("Angle 3: ");
    scanf("%d",&c);
    if((a+b+c)==180)
    printf("Triangle is valid.");
    else
    printf("Triangle isn't valid.");
}