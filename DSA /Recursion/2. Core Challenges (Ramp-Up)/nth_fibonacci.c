#include <stdio.h>

/*
 * Program Description:
 * --------------------
 * This program calculates the Nth Fibonacci number using recursion.
 * The Fibonacci sequence is a series of numbers where each number 
 * is the sum of the two preceding ones, starting from 0 and 1:
 * 0, 1, 1, 2, 3, 5, 8, 13, ...
 *
 * Steps to Resolve:
 * -----------------
 * 1. Base Cases:
 *    - If N = 0, the Fibonacci number is 0.
 *    - If N = 1, the Fibonacci number is 1.
 * 2. Recursive Case:
 *    - The Nth Fibonacci number is the sum of the (N-1)th and (N-2)th Fibonacci numbers.
 * 3. Call the recursive function repeatedly until the base cases are reached, then work upwards to compute the result.
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

int main() {
    int n;

    // Prompt user for input
    printf("Enter the position (N) of the Fibonacci number you want to find: ");
    scanf("%d", &n);

    // Handle invalid input (negative numbers)
    if (n < 0) {
        printf("Fibonacci numbers are only defined for non-negative integers. Please try again!\n");
        return 1; // Exit the program with an error code
    }

    // Call the recursive function and print the result
    printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));

    // Fun closing message
    printf("Math magic: Recursion takes us through time to find Fibonacci numbers!\n");
    return 0;
}
