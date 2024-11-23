#include <stdio.h>

/*
 * Program Description:
 * --------------------
 * This program merges two sorted arrays into a single sorted array using recursion. 
 * Instead of iterating with loops, it compares elements from both arrays and recursively 
 * adds the smaller element to the resulting array.
 *
 * Steps to Resolve:
 * -----------------
 * 1. Compare the current elements from both arrays.
 * 2. Add the smaller element to the merged array.
 * 3. Recursively process the rest of the arrays.
 * 4. Stop when one of the arrays is fully traversed, then copy the remaining elements 
 *    from the other array.
 */

void mergeArraysRecursive(int arr1[], int n1, int arr2[], int n2, int merged[], int i, int j, int k) {
    // Base case: If both arrays are fully traversed, stop.
    if (i == n1 && j == n2) {
        return;
    }

    // If arr1 is fully traversed, add remaining elements of arr2.
    if (i == n1) {
        merged[k] = arr2[j];
        mergeArraysRecursive(arr1, n1, arr2, n2, merged, i, j + 1, k + 1);
        return;
    }

    // If arr2 is fully traversed, add remaining elements of arr1.
    if (j == n2) {
        merged[k] = arr1[i];
        mergeArraysRecursive(arr1, n1, arr2, n2, merged, i + 1, j, k + 1);
        return;
    }

    // Compare current elements and add the smaller one to the merged array.
    if (arr1[i] < arr2[j]) {
        merged[k] = arr1[i];
        mergeArraysRecursive(arr1, n1, arr2, n2, merged, i + 1, j, k + 1);
    } else {
        merged[k] = arr2[j];
        mergeArraysRecursive(arr1, n1, arr2, n2, merged, i, j + 1, k + 1);
    }
}

int main() {
    int arr1[100], arr2[100], merged[200];
    int n1, n2;

    // Input for the first array.
    printf("Enter the number of elements in the first sorted array: ");
    scanf("%d", &n1);
    printf("Enter the elements of the first sorted array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input for the second array.
    printf("Enter the number of elements in the second sorted array: ");
    scanf("%d", &n2);
    printf("Enter the elements of the second sorted array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the arrays using the recursive function.
    mergeArraysRecursive(arr1, n1, arr2, n2, merged, 0, 0, 0);

    // Output the merged sorted array.
    printf("The merged sorted array is: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    // Fun closure.
    printf("Recursion: Merging arrays like a pro, one element at a time!\n");

    return 0;
}
