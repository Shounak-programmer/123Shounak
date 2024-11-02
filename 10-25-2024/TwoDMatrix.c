#include <stdio.h>

void addcrow(int rr, int cc, int m1[rr][cc], int m2[rr][cc], int result[rr][cc]) {
    for (int i = 0; i < rr; i++) {
        for (int j = 0; j < cc; j++) {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void subscrow(int rr, int cc, int m1[rr][cc], int m2[rr][cc], int result[rr][cc]) {
    for (int i = 0; i < rr; i++) {
        for (int j = 0; j < cc; j++) {
            result[i][j] = m1[i][j] - m2[i][j];
        }
    }
}

void printMatrix(int rr, int cc, int matrix[rr][cc]) {
    for (int i = 0; i < rr; i++) {
        for (int j = 0; j < cc; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rr, cc;
    printf("Enter the number of rows: ");
    scanf("%d", &rr);
    printf("Enter the number of columns: ");
    scanf("%d", &cc);
    int m1[rr][cc], m2[rr][cc], result[rr][cc];
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rr; i++) {
        for (int j = 0; j < cc; j++) {
            printf("m1[%d][%d] = ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rr; i++) {
        for (int j = 0; j < cc; j++) {
            printf("m2[%d][%d] = ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
    addcrow(rr, cc, m1, m2, result);
    printf("\nMatrix Addition:\n");
    printMatrix(rr, cc, result);
    subscrow(rr, cc, m1, m2, result);
    printf("\nMatrix Subtraction:\n");
    printMatrix(rr, cc, result);

    return 0;
}
