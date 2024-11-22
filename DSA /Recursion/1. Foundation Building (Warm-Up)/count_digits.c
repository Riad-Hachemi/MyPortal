#include <stdio.h>

/*
 * Program Description:
 * --------------------
 * This program counts the number of digits in a given number using recursion.
 * How many digits does that number have? Let's count them one by one.
 * We'll use recursion to peel off one digit at a time, like unwrapping a gift (without the fancy paper).
 *
 * Steps to Resolve:
 * -----------------
 * 1. Start with the base case: If the number is 0, it has no digits (but we'll count it as 1).
 * 2. For each recursive call, remove the last digit of the number by dividing by 10.
 * 3. Keep a count of how many digits you've peeled off until the number becomes 0.
 */

int countDigits(int n) {
    // Base case: If the number is 0, return 0.
    if (n == 0) {
        return 0;
    }

    // Recursive call: Remove the last digit by dividing the number by 10.
    // Add 1 to the count each time.
    return 1 + countDigits(n / 10);
}

int main() {
    int N;

    // Prompt user for input
    printf("Enter a number to count its digits: ");
    scanf("%d", &N);

    // Handle the case where the number is 0
    if (N == 0) {
        printf("The number 0 has 1 digit.\n");
    } else {
        // Call the recursive function and print the result
        printf("The number %d has %d digits.\n", N, countDigits(N));
    }

    // Fun closing message
    printf("Counting digits like a champ. Done!\n");
    return 0;
}
