#include <stdio.h>

/*
Sum of Digits Program in C with Recursion

Description:
This program calculates the sum of digits of a given non-negative integer using recursion.

How it works:
1. The base case: If the number is 0, return 0. This is because the sum of digits of 0 is 0.
2. The recursive case: For any positive integer, we break the number down by separating the last digit and adding it to the sum of the remaining digits. 
   We keep doing this until we have processed all digits.

Recursion is like peeling off one layer at a time. You take the last digit (peel it off), and then you call yourself to handle the next digit. When you get to the last layer, you just stop!

Let's see the implementation:

*/

int sum_of_digits(int n) {
    // Base Case: When n is 0, there are no more digits left, so return 0.
    if (n == 0) {
        return 0;
    }

    // Recursive Case: Get the last digit (n % 10), and add it to the sum of the remaining digits (n / 10).
    // It's like "peeling" off the last digit and dealing with the rest of the number.
    return (n % 10) + sum_of_digits(n / 10);
}

int main() {
    int num;

    // Step 1: Ask the user for input. They need to give us a number to work with.
    printf("Enter a non-negative integer to calculate the sum of its digits: ");
    scanf("%d", &num);

    // Step 2: Check if the number is valid (it can't be negative, because that's a whole different can of worms)
    if (num < 0) {
        printf("Error: Please enter a non-negative integer.\n");
    } else {
        // Step 3: Call the function to calculate the sum of digits and display the result.
        printf("The sum of digits of %d is: %d\n", num, sum_of_digits(num));
    }

    return 0;
}

/*
Explanation:

1. The Base Case: When n == 0, we’ve processed all digits, so the sum is 0. There’s nothing left to add.
2. The Recursive Case: We take the last digit (n % 10) and add it to the result of the sum of the digits of the rest of the number (n / 10).
   It’s like taking one digit from the number, adding it, and then telling the function to keep working on the rest.
3. This continues until we hit 0, when we can stop and return the result. Each recursive call “adds” a digit and simplifies the problem.
4. Finally, the sum of all digits is displayed. A simple task, but recursion makes it seem like a mini adventure!

Tips for Recursion:
- Recursion is like doing a job bit by bit. You tackle the first part, then tell yourself to handle the next, and so on.
- A base case is your "exit strategy"—it tells the function when to stop and go back.
- If you’re confused, try writing out how the function works with an example. It can help you visualize how recursion "builds up" the solution.

Fun Fact: Did you know? The sum of digits is used in several number-based algorithms, such as checking if a number is divisible by 9. That’s right, math is secretly everywhere!
*/


