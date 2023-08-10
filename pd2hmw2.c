#include <stdio.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int arr1[] = {6, 12, 15, 18, 24};
    int arr2[] = {1, 5, 7, 11, 14, 16, 25};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int combined[size * 2];

    for (int i = 0; i < size; i++) {
        *(combined + i) = *(arr1 + i);
        *(combined + i + size) = *(arr2 + i);
    }

    bubbleSort(combined, size * 2);

    printf("Original arrays:\nArray 1: ");
    for (int i = 0; i < size; i++) printf("%d ", *(arr1 + i));
    printf("\nArray 2: ");
    for (int i = 0; i < size; i++) printf("%d ", *(arr2 + i));

    printf("\n\nSorted arrays:\nCombined Array: ");
    for (int i = 0; i < size * 2; i++) printf("%d ", *(combined + i));

    return 0;
}
