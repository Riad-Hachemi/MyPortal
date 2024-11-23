#include <stdio.h>

/*
 * Program Description:
 * --------------------
 * This program counts how many times a specific character occurs in a string, 
 * using recursion. Instead of loops, we process one character at a time.
 *
 * Steps to Resolve:
 * -----------------
 * 1. Check if the current character matches the target character.
 * 2. If it matches, add 1 to the count; otherwise, add 0.
 * 3. Recursively process the rest of the string.
 * 4. Stop when we reach the end of the string.
 */

int countOccurrences(char str[], char target, int index) {
    // Base case: If we reach the null terminator, return 0.
    if (str[index] == '\0') {
        return 0;
    }

    // Check if the current character matches the target.
    int count = (str[index] == target) ? 1 : 0;

    // Recursively count in the rest of the string.
    return count + countOccurrences(str, target, index + 1);
}

int main() {
    char str[100], target;

    // Input the string.
    printf("Enter the string: ");
    scanf("%99[^\n]", str);

    // Clear input buffer for character input.
    getchar();

    // Input the target character to count.
    printf("Enter the character to count: ");
    scanf("%c", &target);

    // Call the recursive function to count occurrences.
    int count = countOccurrences(str, target, 0);

    // Display the result.
    printf("The character '%c' occurs %d times in the string \"%s\".\n", target, count, str);

    // Fun closure.
    printf("Recursion: Finding '%c' one character at a time, like a detective on a mission!\n", target);

    return 0;
}
