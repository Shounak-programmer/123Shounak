//Write a C program Find GCD Using while Loop.
#include <stdio.h>

int main() {
    int a, b, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    gcd = a; 

    printf("GCD: %d\n", gcd);
    return 0;
}
