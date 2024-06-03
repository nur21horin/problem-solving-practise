#include <stdio.h>
void reverseArray(int arr[], int size) {
    int *left = arr; // Pointer to the first element
    int *right = arr + size - 1; // Pointer to the last element
    while (left < right) {
        // Swap elements at left and right
        int temp = *left;
        *left = *right;
        *right = temp;
        // Move pointers inward
        left++;
        right--;
    }
}
int main() {
    int arr[] = {12, 23,34, 32, 434, 55};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    reverseArray(arr, size);
    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
