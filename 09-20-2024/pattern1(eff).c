#include <stdio.h>

int main() {
    printf("Enter the number of rows: ");
    int a, row = 1, elements = 0;
    scanf("%d", &a);
    while (elements < a-1) {
        printf("* ");
        elements++;  
        if (elements == row) {
            printf("\n"); 
            row++;        
            elements = 0; 
    }
    }
    return 0;
}

