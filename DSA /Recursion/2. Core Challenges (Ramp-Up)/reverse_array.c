#include <stdio.h>

/*
 * Program Description:
 * --------------------
 * This program reverses an array using recursion. Instead of iterating with loops, 
 * it swaps elements starting from the ends and works inward, leveraging recursive calls.
 *
 * Steps to Resolve:
 * -----------------
 * 1. Start with the first and last elements of the array.
 * 2. Swap the two elements.
 * 3. Recursively move toward the middle by incrementing the starting index 
 *    and decrementing the ending index.
 * 4. Stop when the indices meet or cross.
 */

void reverseArray(int arr[], int start, int end) {
    // Base case: If start index >= end index, we're done.
    if (start >= end) {
        return;
    }

    // Swap the elements at 'start' and 'end'.
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursively call the function for the next pair of elements.
    reverseArray(arr, start + 1, end - 1);
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

    // Reverse the array using the recursive function.
    reverseArray(arr, 0, n - 1);

    // Display the reversed array.
    printf("The reversed array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Fun closure.
    printf("Array reversed recursively! Sometimes, going backwards is the way forward!\n");

    return 0;
}
