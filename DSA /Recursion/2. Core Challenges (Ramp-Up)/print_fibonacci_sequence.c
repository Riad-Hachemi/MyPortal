#include <stdio.h>

/*
 * Program Description:
 * --------------------
 * This program prints the Fibonacci sequence up to N terms using recursion.
 * The Fibonacci sequence starts with 0 and 1, and each subsequent term
 * is the sum of the two previous ones:
 * 0, 1, 1, 2, 3, 5, 8, 13, ...
 *
 * Steps to Resolve:
 * -----------------
 * 1. Use a helper recursive function to calculate each Fibonacci term.
 * 2. Print each term as it is calculated.
 * 3. The sequence is printed from the first to the Nth term.
 */

int fibonacci(int n) {
    // Base case 1: If N is 0, Fibonacci(N) = 0
    if (n == 0) {
        return 0;
    }
    // Base case 2: If N is 1, Fibonacci(N) = 1
    if (n == 1) {
        return 1;
    }
    // Recursive case: Fibonacci(N) = Fibonacci(N-1) + Fibonacci(N-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSequence(int n) {
    // Loop through the first N terms
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i)); // Print each term
    }
    printf("\n"); // End the sequence with a new line
}

int main() {
    int n;

    // Prompt the user for input
    printf("Enter the number of terms (N) for the Fibonacci sequence: ");
    scanf("%d", &n);

    // Handle invalid input (negative numbers)
    if (n < 1) {
        printf("The number of terms must be at least 1. Please try again!\n");
        return 1; // Exit the program with an error code
    }

    // Print the Fibonacci sequence
    printf("The first %d terms of the Fibonacci sequence are:\n", n);
    printFibonacciSequence(n);

    // Fun closing remark
    printf("Recursive magic delivers the Fibonacci sequence, term by term!\n");
    return 0;
}
