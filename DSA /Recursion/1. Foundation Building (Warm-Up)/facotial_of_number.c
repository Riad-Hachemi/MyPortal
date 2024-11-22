#include <stdio.h>

/*
 * Program Description:
 * --------------------
 * This program calculates the factorial of a given number N using recursion.
 * Factorial, you know, that mind-boggling mathematical function (N! = N * (N-1) * (N-2) * ... * 1).
 * We'll use recursion to do the hard work and make ourselves look like math wizards.
 *
 * Steps to Resolve:
 * -----------------
 * 1. Start with the base case: If N is 0 or 1, return 1 (because 0! = 1! = 1).
 * 2. For every recursive call, multiply N by the factorial of (N-1).
 * 3. And voilà, you’ve got the factorial, like magic!
 */

int factorial(int n) {
    // Base case: Factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }

    // Recursive call: Multiply N by the factorial of N-1
    return n * factorial(n - 1);
}

int main() {
    int N;

    // Prompt user for input
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &N);

    // Check if the number is negative (factorial is only defined for non-negative integers)
    if (N < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the recursive function and print the result
        printf("Factorial of %d is: %d\n", N, factorial(N));
    }

    // End with a fun note!
    printf("Factorial magic complete. You just did it the recursive way!\n");
    return 0;
}

