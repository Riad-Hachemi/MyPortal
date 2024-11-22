#include <stdio.h>

/*
 * Program Description:
 * --------------------
 * This program prints all the numbers from N to 1 using recursion. 
 * We’ll keep the recursive style but change the order of the print.
 * The magic of recursion helps us print numbers in reverse without breaking a sweat.
 *
 * Steps to Resolve:
 * -----------------
 * 1. Start with the base case: If N is less than 1, stop (we don't need to print numbers below 1).
 * 2. For every recursive call, print the current number FIRST, then call the function with (N-1).
 *    This ensures numbers are printed from N to 1.
 * 3. Watch the numbers go from big to small, like climbing down a mountain.
 */

void printNumbers(int n) {
    // Base case: If n is less than 1, stop recursion.
    if (n < 1) {
        return;
    }

    // Action step: Print the current number before making the recursive call.
    printf("%d ", n);

    // Recursive call: Go smaller before printing the next number.
    printNumbers(n - 1);

    // Fun comment: Recursion acts like a reverse rollercoaster—first up, then down!
}

int main() {
    int N;

    // Prompt user for input
    printf("Enter a positive number (N): ");
    scanf("%d", &N);

    // Call the recursive function
    printf("Numbers from %d to 1:\n", N);
    printNumbers(N);

    // End with a happy note!
    printf("\nDone! Recursive magic complete.\n");
    return 0;
}
