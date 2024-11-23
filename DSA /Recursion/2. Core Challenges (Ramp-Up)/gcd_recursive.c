#include <stdio.h>

/*
 * Program Description:
 * --------------------
 * This program calculates the Greatest Common Divisor (GCD) of two integers
 * using recursion. The GCD of two numbers is the largest integer that divides 
 * both numbers without leaving a remainder. The algorithm is based on 
 * Euclid's method:
 *
 * GCD(a, b) = GCD(b, a % b) 
 * (Stop when b = 0; at that point, GCD is a).
 *
 * Steps to Resolve:
 * -----------------
 * 1. Take two integers as input.
 * 2. Use the recursive function:
 *    - Base case: If the second number (b) is 0, return the first number (a).
 *    - Recursive case: Call the function with (b, a % b).
 * 3. Display the calculated GCD.
 */

int gcd(int a, int b) {
    // Base case: If b is 0, GCD is a
    if (b == 0) {
        return a;
    }
    // Recursive case: GCD(a, b) = GCD(b, a % b)
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    // Prompt the user for two integers
    printf("Enter two integers to find their GCD: ");
    scanf("%d %d", &num1, &num2);

    // Ensure the numbers are positive (optional for robustness)
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    // Calculate the GCD and display it
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));

    // Fun fact to wrap up
    printf("Fun fact: Finding the GCD has been a cornerstone of math since ancient Greece!\n");

    return 0;
}
