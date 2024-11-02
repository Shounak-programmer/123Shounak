#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>  // usleep() is defined here

int main() {
    // Seed random number generator
    srand(time(0));

    // Infinite loop
    while (1) {
        // Generate a random character
        char randomChar = (rand() % 94) + 33;  // ASCII range from 33 to 126 (printable characters)

        // Generate random coordinates on the screen
        int randomX = rand() % 80;  // Assuming 80 columns wide
        int randomY = rand() % 24;  // Assuming 24 rows high

        // Move cursor to random position
        printf("\033[%d;%dH", randomY, randomX);  // ANSI escape code to move cursor

        // Print the random character
        printf("%c", randomChar);

        // Flush the output buffer to ensure immediate printing
        fflush(stdout);

        // Small delay to make the screen chaotic but not too fast
        usleep(10000);  // Delay in microseconds (10 milliseconds)
    }

    return 0;
}
