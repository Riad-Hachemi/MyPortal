#include <stdio.h>

/*
 * Program Description:
 * --------------------
 * This program finds the maximum element in an array using recursion.
 * Instead of using loops, it breaks the array into smaller parts and finds the 
 * maximum by comparing the first element with the maximum of the remaining array.
 *
 * Steps to Resolve:
 * -----------------
 * 1. Take an array and its size as input.
 * 2. Use a recursive function:
 *    - Base case: If the array has only one element, return that element.
 *    - Recursive case: Compare the current element with the maximum of the rest 
 *      of the array (determined recursively).
 * 3. Return the largest value.
 */

int findMax(int arr[], int size) {
    // Base case: If the array has only one element, it's the maximum.
    if (size == 1) {
        return arr[0];
    }

    // Recursive call: Find the maximum of the rest of the array.
    int restMax = findMax(arr + 1, size - 1);

    // Compare the first element with the maximum of the rest and return the larger one.
    return (arr[0] > restMax) ? arr[0] : restMax;
}

int main() {
    int arr[100], n;

    // Get the size of the array.
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements.
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and display the maximum element using the recursive function.
    int maxElement = findMax(arr, n);
    printf("The largest element in the array is: %d\n", maxElement);

    // Fun closure.
    printf("Recursion: Where we find the BIGGEST, one step at a time!\n");

    return 0;
}
