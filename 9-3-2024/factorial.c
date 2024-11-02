#include <stdio.h>

int main() {
    int n, i;
    long int factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } 
    else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %ld\n", n, factorial);
    }

    return 0;
}