#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
 * Program Description:
 * --------------------
 * This program checks if a given string is a palindrome.
 * A palindrome is a word, phrase, or sequence that reads the same backward as forward.
 * We’ll solve this using recursion, so we can check if the string matches its reverse 
 * without actually reversing the entire string (efficiency for the win!).
 *
 * Steps to Resolve:
 * -----------------
 * 1. Start with the base case: If the first and last characters are equal, check the inner substring.
 * 2. If at any point, the characters don’t match, return false. If they all match, return true.
 * 3. Use recursion to compare the characters in the string from both ends, progressively moving inward.
 */

bool isPalindrome(char str[], int start, int end) {
    // Base case: If we have checked all the characters, it's a palindrome
    if (start >= end) {
        return true;
    }

    // If the characters at start and end do not match, it's not a palindrome
    if (str[start] != str[end]) {
        return false;
    }

    // Recursive call: Check the inner substring
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];

    // Prompt user for input
    printf("Enter a string to check if it's a palindrome: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from fgets (if it exists)
    str[strcspn(str, "\n")] = '\0';

    // Call the recursive function to check for palindrome
    if (isPalindrome(str, 0, strlen(str) - 1)) {
        printf("\"%s\" is a palindrome!\n", str);
    } else {
        printf("\"%s\" is NOT a palindrome!\n", str);
    }

    // Fun closing message
    printf("And that's how you check a palindrome, one recursive step at a time.\n");
    return 0;
}
