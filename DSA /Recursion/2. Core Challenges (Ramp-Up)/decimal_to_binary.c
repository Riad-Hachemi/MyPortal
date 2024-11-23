#include <stdio.h>

/*
 * Program Description:
 * --------------------
 * This program converts a decimal number (base-10) to its binary representation
 * (base-2) using recursion. The conversion involves repeatedly dividing the 
 * number by 2 and storing the remainders, which form the binary digits.
 *
 * Steps to Resolve:
 * -----------------
 * 1. Take a decimal number as input.
 * 2. Use a recursive function:
 *    - Base case: If the number is 0, return (end the recursion).
 *    - Recursive case: Divide the number by 2, call the function on the quotient, 
 *      and then print the remainder (which represents binary digits).
 * 3. Print the binary digits in correct order.
 */

void decimalToBinary(int n) {
    // Base case: If n reaches 0, stop the recursion.
    if (n == 0) {
        return;
    }
    // Recursive call: Process the quotient first (divide by 2).
    decimalToBinary(n / 2);

    // Print the remainder (binary digit).
    printf("%d", n % 2);
}

int main() {
    int decimal;

    // Prompt the user for input.
    printf("Enter a decimal number to convert to binary: ");
    scanf("%d", &decimal);

    // Special case for 0, as recursion won't handle it directly.
    if (decimal == 0) {
        printf("The binary representation of 0 is: 0\n");
        return 0;
    }

    // Print the result with a header.
    printf("The binary representation of %d is: ", decimal);

    // Call the recursive function to display the binary number.
    decimalToBinary(decimal);

    // Add a newline for a cleaner display.
    printf("\n");

    // Fun closure.
    printf("Remember, computers think in binary. It's like their native language!\n");

    return 0;
}
