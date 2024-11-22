#include <stdio.h>

/*
 * Program Description:
 * --------------------
 * This program calculates the sum of the first N natural numbers using recursion.
 * We’ll keep things recursive, which makes us look like smart mathematicians 
 * (or at least, it makes us feel like one).
 *
 * Steps to Resolve:
 * -----------------
 * 1. Start with the base case: If N is 0, the sum is 0 (because 0 + ... = 0).
 * 2. For every recursive call, we add the current number to the sum of the smaller problem (N-1).
 * 3. Feel free to brag about how cool recursion makes summing numbers look.
 */

int sumOfNumbers(int n) {
    // Base case: If N is 0, return 0 (sum of 0 numbers is 0).
    if (n == 0) {
        return 0;
    }

    // Recursive call: Add the current number to the sum of the remaining numbers.
    return n + sumOfNumbers(n - 1);
}

int main() {
    int N;

    // Prompt user for input
    printf("Enter a positive number (N): ");
    scanf("%d", &N);

    // Call the recursive function and print the result
    printf("Sum of the first %d natural numbers is: %d\n", N, sumOfNumbers(N));

    // End with a celebratory message!
    printf("Success! Sum calculated recursively. You're officially a recursion pro.\n");
    return 0;
}

