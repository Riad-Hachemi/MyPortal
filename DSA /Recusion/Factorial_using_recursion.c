#include <stdio.h>

/*
Factorial Program in C with Recursion

Description:
This program calculates the factorial of a non-negative integer using recursion.
The factorial of a number n (denoted n!) is the product of all positive integers less than or equal to n.

For example:
- 5! = 5 * 4 * 3 * 2 * 1 = 120
- 0! = 1 (by definition)

How the program works:
1. The base case: If the number is 0, return 1. This is because by definition, 0! = 1.
2. The recursive case: For any positive integer n, we calculate n * factorial(n-1). 
   This continues until we reach the base case.

Recursion is like a Russian doll—each function call is a smaller version of the original problem. 
We break the problem down until we reach the smallest case, and then we put everything back together.

Let's take a look at the code implementation, shall we?

*/

int factorial(int n) {
    // Base Case: When n is 0, we know that 0! = 1 (math magic)
    if (n == 0) {
        return 1;
    }

    // Recursive Case: The program keeps calling itself, like an infinite loop of "I'm calling you!"
    return n * factorial(n - 1);
}

int main() {
    int num;

    // Step 1: Get input from the user (no pressure, just type a number)
    printf("Enter a non-negative integer to calculate its factorial: ");
    scanf("%d", &num);

    // Step 2: Check if the input is valid (no negative numbers allowed, we don't want to break math)
    if (num < 0) {
        printf("Error: Factorial is not defined for negative numbers. Try again with a non-negative integer.\n");
    } else {
        // Step 3: Calculate the factorial and display the result (ta-da!)
        printf("The factorial of %d is: %d\n", num, factorial(num));
    }

    return 0;
}

/*
Explanation:

1. The Base Case: When n == 0, we hit the stop button. The function just returns 1 because 0! is defined as 1.
2. The Recursive Case: If n is greater than 0, the function calls itself, calculating n * factorial(n-1).
   Think of this like calling your friend to help you with the next step—"Hey, can you do factorial(n-1) for me?" 
   Then your friend calls another friend for factorial(n-2), and so on, until everyone has done their part.
3. The magic happens when the function reaches 0. Then, like a team of superheroes, the recursive calls come back, 
   bringing the results together to solve the original problem.
4. Finally, when all the calls are done, the program proudly announces the factorial result.

Tips for Recursion:
- Recursion is like a loop, but cooler because it can call itself (basically the ultimate way to say "I can do this myself").
- Always have a base case—it's like a stop sign for your recursion, telling it when to quit.
- Draw out the recursion on paper if you're confused—sometimes it’s easier to see recursion like a flowchart!

Fun Fact: Did you know? Factorial numbers grow really fast. For example, 10! = 3,628,800—way more than you can eat for lunch!
*/

