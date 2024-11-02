//Write a C Program to implement Factorial using Recursion.
#include <stdio.h>
int fin = 1,i = 1;
int fact(int a) {
    if (a <= 1) {  // Base case: factorial of 0 or 1 is 1
        return 1;
    } else {
        return a * fact(a - 1);  // Recursive case
    }
}
int main(){
    printf("Enter the number: ");
    int a;
    scanf("%d",&a);
    int factorial = fact(a);
    printf("The factorial of the given number %d is: %d",a,factorial);
}