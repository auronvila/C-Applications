#include <stdio.h>
#include <limits.h>

int main() {
    int numArr[] = {1, 5, 0, 8, 4, 7, 11};
    int n = 7; // Number of elements in numArr

    // Selection sort algorithm
    for (int i = 0; i < n - 1; ++i) {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (numArr[j] < numArr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        int temp = numArr[minIndex];
        numArr[minIndex] = numArr[i];
        numArr[i] = temp;
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", numArr[i]);
    }
    printf("\n");

    return 0;
}
