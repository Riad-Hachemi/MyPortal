#include <stdio.h>

/*
 * Program Description:
 * --------------------
 * This program finds the minimum element in an array using recursion. 
 * Instead of iterating through the array with loops, the function checks 
 * each element recursively to determine the smallest value.
 *
 * Steps to Resolve:
 * -----------------
 * 1. Take an array and its size as input.
 * 2. Use a recursive function:
 *    - Base case: If the array has only one element, return that element.
 *    - Recursive case: Compare the current element with the minimum of the rest 
 *      of the array (determined recursively).
 * 3. Return the smallest value.
 */

int findMin(int arr[], int size) {
    // Base case: If the array has only one element, it's the minimum.
    if (size == 1) {
        return arr[0];
    }

    // Recursive call: Find the minimum of the rest of the array.
    int restMin = findMin(arr + 1, size - 1);

    // Compare the first element with the minimum of the rest and return the smallest.
    return (arr[0] < restMin) ? arr[0] : restMin;
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

    // Find and display the minimum element using the recursive function.
    int minElement = findMin(arr, n);
    printf("The smallest element in the array is: %d\n", minElement);

    // Fun closure.
    printf("Finding the smallest... recursion style! Smaller is better here!\n");

    return 0;
}
