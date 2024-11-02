// Write a C program to calculate sum of digits Using while Loop.
#include <stdio.h>
int main(){
    int a,tmp,sum = 0;
    printf("Enter a number: ");
    scanf("%d",&a);
    while(a){
     tmp = a % 10; 
     a /= 10;
     sum += tmp;
    }
    printf("The sum of the digits of the following number are: %d",sum);
}