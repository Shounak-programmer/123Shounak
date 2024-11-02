#include <stdio.h>

int main() {
    int num, x, rev = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &num);

    x = num;  

    while (num != 0) {
        rem = num % 10;  
        rev = rev * 10 + rem;  
        num /= 10; 
    }

    if (x == rev) {
        printf("%d is a palindrome.\n", x);
    } else {
        printf("%d is not a palindrome.\n", x);
    }

    return 0;
}
