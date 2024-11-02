#include <stdio.h>

int main() {
    int limit, i, t;

    printf("How many multiples of 3 do you want?: ");
    scanf("%d", &limit);

    printf("%d multiples of 3 are:\n", limit);

    for(i = 1; i <= limit; i++) {
        t = i*3;
        printf("%d ", t);
    }

    printf("\n");

    return 0;
}
