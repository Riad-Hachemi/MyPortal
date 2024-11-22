#include <stdio.h>
#include <string.h>

/*
 * Program Description:
 * --------------------
 * This program reverses a given string using recursion.
 * Reversing a string might seem tricky at first, but it's just a matter of taking the 
 * first character and pushing it to the end of the string, one step at a time.
 * The fun part? We'll do it recursively, so we’ll be thinking in reverse (pun intended).
 *
 * Steps to Resolve:
 * -----------------
 * 1. Start with the base case: If the string is empty or just one character, it is already reversed.
 * 2. For each recursive call, swap the first and last characters, then move towards the middle.
 * 3. Keep calling the function until the string is reversed completely.
 */

void reverseString(char str[], int start, int end) {
    // Base case: If the start index is greater than or equal to the end index, stop.
    if (start >= end) {
        return;
    }

    // Swap characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call: Move towards the middle
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];

    // Prompt user for input
    printf("Enter a string to reverse: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from fgets (if it exists)
    str[strcspn(str, "\n")] = '\0';

    // Call the recursive function to reverse the string
    reverseString(str, 0, strlen(str) - 1);

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    // Fun closing message
    printf("The string has been reversed. Like magic, but with recursion!\n");
    return 0;
}
