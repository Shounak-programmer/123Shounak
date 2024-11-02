#include <stdio.h>

void reverseArray(int *arr, int size) {
    int *start = arr;           
    int *end = arr + size - 1;  
    int temp;
    for (; start < end; start++, end--) {
        temp = *start;
        *start = *end;
        *end = temp;
   }
}


int main() {
    int size;
    printf("\n----------------------------------------------\nEnter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\n----------------------------------------------\nOriginal Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    reverseArray(arr, size);
    printf("\n----------------------------------------------\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
