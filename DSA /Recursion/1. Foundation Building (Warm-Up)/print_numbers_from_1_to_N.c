#include <stdio.h>

/*
 * Program Description:
 * --------------------
 * This program prints all the numbers from 1 to N using recursion. 
 * Instead of using a boring old loop (because loops are so last season), 
 * we’ll let the magic of recursion do the job!
 *
 * Steps to Resolve:
 * -----------------
 * 1. Start with the base case: If N is less than 1, stop (you can’t print numbers below 1).
 * 2. For every recursive call, print the current number AFTER calling the function 
 *    with (N-1). This ensures numbers are printed from 1 to N.
 * 3. Enjoy watching the recursion unfold—it's like unwrapping a recursive present.
 */

void printNumbers(int n) {
    // Base case: If n is less than 1, stop recursion.
    if (n < 1) {
        return;
    }

    // Recursive call: Go smaller before doing anything (like a cliffhanger in movies!)
    printNumbers(n - 1);

    // Action step: Print the current number after returning from recursion.
    printf("%d ", n);

    // Fun comment: Now you know how recursion climbs the stack like a determined ninja.
}

int main() {
    int N;

    // Prompt user for input
    printf("Enter a positive number (N): ");
    scanf("%d", &N);

    // Call the recursive function
    printf("Numbers from 1 to %d:\n", N);
    printNumbers(N);

    // End with a happy note!
    printf("\nDone! Recursive magic complete.\n");
    return 0;
}

