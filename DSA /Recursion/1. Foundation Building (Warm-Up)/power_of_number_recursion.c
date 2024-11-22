#include <stdio.h>

/*
Power Program in C with Recursion

Description:
This program calculates the power of a number using recursion. The idea is to calculate the result of raising a base number to an exponent.

For example:
- 2^3 = 2 * 2 * 2 = 8
- 5^4 = 5 * 5 * 5 * 5 = 625

How it works:
1. The base case: If the exponent is 0, return 1. This is because any number raised to the power of 0 is 1.
2. The recursive case: For any positive exponent, we multiply the base number by the result of calling the function with the exponent reduced by 1. 
   This continues until the exponent reaches 0.

Recursion is like building a tower of multiplications. You add one block at a time (multiply the base by the result of a smaller power), and you stop when the tower reaches a height of 0.

Let's dive into the code:

*/

int power(int base, int exp) {
    // Base Case: If exponent is 0, return 1 (because any number raised to 0 is 1)
    if (exp == 0) {
        return 1;
    }

    // Recursive Case: Multiply the base by the result of base raised to exp-1
    // It’s like asking, "Hey, what’s the power of (base, exp-1)? I’ll multiply the answer by base."
    return base * power(base, exp - 1);
}

int main() {
    int base, exp;

    // Step 1: Ask the user for the base and exponent (time to set up the tower!)
    printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the exponent (power to raise the base to): ");
    scanf("%d", &exp);

    // Step 2: Check if the exponent is negative (this program doesn't handle negative exponents)
    if (exp < 0) {
        printf("Error: This program only works for non-negative exponents.\n");
    } else {
        // Step 3: Call the function to calculate the power and display the result
        printf("%d raised to the power of %d is: %d\n", base, exp, power(base, exp));
    }

    return 0;
}

/*
Explanation:

1. The Base Case: When the exponent is 0, we return 1. This is the "stop" condition because any number raised to the power of 0 is 1.
2. The Recursive Case: If the exponent is greater than 0, we multiply the base by the result of calling power(base, exp - 1).
   Think of it as starting with a base of blocks, and you add one block at a time (multiply by the base), reducing the exponent each time until you reach the top.
3. This keeps going until the exponent becomes 0, and then we stop and return 1. At that point, the tower is complete, and all the recursive calls resolve back to the original problem.
4. The final result is the base raised to the power of the exponent.

Tips for Recursion:
- Recursion is like peeling an onion one layer at a time. You keep asking the same question, but with one less layer each time.
- Always make sure you have a base case. Without it, you’d never stop peeling the onion—just like without it, your function would keep calling itself forever.
- If you need to understand recursion better, try drawing out how the calls are made—it's like following a map.

Fun Fact: Did you know? Powers of numbers grow super quickly! For example, 2^10 = 1024. Imagine multiplying that in your head without using a calculator. Recursion to the rescue!
*/




