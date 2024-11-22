#include <stdio.h>

/*
 * Program Description:
 * --------------------
 * This program checks if a given number is even or odd using recursion.
 * Instead of the traditional modulo operator, we use the subtraction method:
 * - Subtract 2 repeatedly until we reach 0 (even) or 1 (odd).
 *
 * Steps to Resolve:
 * -----------------
 * 1. Base Cases:
 *    - If the number is 0, it's even.
 *    - If the number is 1, it's odd.
 * 2. Recursive Step:
 *    - Call the function with the number reduced by 2, progressively working toward the base cases.
 * 3. Return the result from the base case up the recursion stack.
 */

int isEven(int num) {
    // Base case: If the number is 0, it's even
    if (num == 0) {
        return 1; // 1 represents "true"
    }
    // Base case: If the number is 1, it's odd
    if (num == 1) {
        return 0; // 0 represents "false"
    }
    // Recursive case: Reduce the number by 2 and check again
    return isEven(num - 2);
}

int main() {
    int number;

    // Prompt the user for input
    printf("Enter a number to check if it's even or odd: ");
    scanf("%d", &number);

    // Handle negative numbers (optional, recursion works without this)
    if (number < 0) {
        printf("Negative numbers? Don't worry, we'll still check.\n");
        number = -number; // Convert to positive for simplicity
    }

    // Call the recursive function and print the result
    if (isEven(number)) {
        printf("%d is even!\n", number);
    } else {
        printf("%d is odd!\n", number);
    }

    // Fun closing remark
    printf("Recursive math for even and odd? Who knew checking numbers could be this clever!\n");
    return 0;
}
