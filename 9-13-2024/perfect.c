// Write a C program to check a number perfect number or not.
#include <stdio.h>
int main(){
 printf("Enter a number: ");
 int a,total = 0;
 scanf("%d",&a);
 for(int i = 1; i < a ; i++){
    if(a%i == 0){
        total += i;
    }
 }
 if(total ==  a){
    printf("It's a perfect number.");
 }
 else 
 printf("It's not a perfect number. ");
}