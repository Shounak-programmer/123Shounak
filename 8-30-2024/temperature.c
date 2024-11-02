#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the temperature in degrees Celsius: ");
    scanf("%f", &temperature);

    if (temperature < 0) {
        printf("Very Cold\n");
    } else if (temperature >= 0 && temperature < 15) {
        printf("Cold\n");
    } else if (temperature >= 15 && temperature < 25) {
        printf("Warm\n");
    } else if (temperature >= 25 && temperature < 35) {
        printf("Hot\n");
    } else {
        printf("Very Hot\n");
    }

    return 0;
}
