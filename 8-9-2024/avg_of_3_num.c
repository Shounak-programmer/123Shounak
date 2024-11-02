#include <stdio.h>
int main(){
    float a,b,c,avg;
    printf("Enter three numbers: ");
    scanf(" %f %f %f ", &a,&b,&c);
    avg = (a+b+c)/3.0;
    printf("The average is: %f",avg);
}