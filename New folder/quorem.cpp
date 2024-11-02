#include <stdio.h>

int main() {
    int a,b,quo , rem;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("Enter the number to divide with: ");
    scanf("%d",&b);
    quo = a/b;
    rem = a%b;
    printf("The quotient is %d and the remainder is %d" , quo , rem);
    return 0;
}