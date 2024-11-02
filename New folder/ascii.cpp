#include <stdio.h>

int main() {
    printf("Enter a character: ");
    char a;
    scanf("%c",&a);
    int n = a;
    printf("The ASCII value of %c is %d",a ,n);

    return 0;
}