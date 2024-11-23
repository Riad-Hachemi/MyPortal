#include <stdio.h>

/*
 * Program Description:
 * --------------------
 * This program replaces all occurrences of a specific character in a string with another character,
 * using recursion. It processes one character at a time, replacing it if it matches the target.
 *
 * Steps to Resolve:
 * -----------------
 * 1. Check the current character to see if it matches the target character.
 * 2. If it matches, replace it with the new character.
 * 3. Recursively process the rest of the string.
 * 4. Stop when the null terminator is reached.
 */

void replaceCharacter(char str[], char oldChar, char newChar, int index) {
    // Base case: Stop if we've reached the null terminator.
    if (str[index] == '\0') {
        return;
    }

    // If the current character matches the old character, replace it.
    if (str[index] == oldChar) {
        str[index] = newChar;
    }

    // Process the next character in the string.
    replaceCharacter(str, oldChar, newChar, index + 1);
}

int main() {
    char str[100], oldChar, newChar;

    // Input the string.
    printf("Enter the string: ");
    scanf("%99[^\n]", str);

    // Clear the input buffer for character inputs.
    getchar();

    // Input the character to replace and the new character.
    printf("Enter the character to replace: ");
    scanf("%c", &oldChar);
    getchar(); // Clear the buffer for the next character input.
    printf("Enter the new character: ");
    scanf("%c", &newChar);

    // Call the recursive function to replace characters.
    replaceCharacter(str, oldChar, newChar, 0);

    // Display the modified string.
    printf("The modified string is: \"%s\"\n", str);

    // Fun closure.
    printf("Recursion at work: Swapping '%c' for '%c' one step at a time, like a ninja swapping disguises!\n", oldChar, newChar);

    return 0;
}
