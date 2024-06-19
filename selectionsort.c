#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;
    for (i = 0; i < n - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
        printf("After pass %d: ", i + 1);
        for (int k = 0; k < n; k++)
		{
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); // Add a space after each element
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    printArray(arr, n);
    selectionSort(arr, n);
    printf("\nSorted array: ");
    printArray(arr, n);
    return 0;
}

