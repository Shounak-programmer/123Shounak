#include <stdio.h>
void sortArray(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void mergeArrays(int *arr1, int s1, int *arr2, int s2, int *mergedArr) {
    int i = 0, j = 0, k = 0;
    
    while (i < s1 && j < s2) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    while (i < s1) {
        mergedArr[k++] = arr1[i++];
    }

    while (j < s2) {
        mergedArr[k++] = arr2[j++];
    }
}

int main() {
    int s1, s2;
    printf("Enter the size of the first array: ");
    scanf("%d", &s1);
    int a1[s1];
    printf("Enter the first array:\n");
    for (int i = 0; i < s1; i++) {
        printf(" array [%d] = ", i);
        scanf("%d", &a1[i]);  
    }
    printf("Enter the size of the second array: ");
    scanf("%d", &s2);
    int a2[s2];
    printf("Enter the second array:\n");
    for (int i = 0; i < s2; i++) {
        printf(" array [%d] = ", i);
        scanf("%d", &a2[i]);  
    }
    sortArray(a1, s1);
    sortArray(a2, s2);
    int mergedArray[s1 + s2];

    mergeArrays(a1, s1, a2, s2, mergedArray);
    printf("Merged sorted array: ");
    for (int i = 0; i < s1 + s2; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}
