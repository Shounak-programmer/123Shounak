#include <stdio.h>

int power(int a, int b) {
    if (b == 0) {
        return 1;  
    } else {
        return a * power(a, b - 1);  
    }
}

int main() {
    int base, exponent;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    printf("%d^%d = %d\n", base, exponent, power(base, exponent));

    return 0;
}
