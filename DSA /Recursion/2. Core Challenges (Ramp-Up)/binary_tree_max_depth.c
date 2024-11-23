#include <stdio.h>
#include <stdlib.h>

/*
 * Program Description:
 * --------------------
 * This program calculates the maximum depth (or height) of a binary tree using recursion.
 * The depth of a binary tree is the number of nodes along the longest path 
 * from the root node to a leaf node.
 *
 * Steps to Resolve:
 * -----------------
 * 1. If the tree is empty (null root), the depth is 0.
 * 2. Recursively calculate the depth of the left and right subtrees.
 * 3. Return 1 + the greater depth between the two subtrees.
 */

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

// Function to create a new node.
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Recursive function to calculate the maximum depth of the binary tree.
int maxDepth(Node* root) {
    if (root == NULL) {
        // Base case: An empty tree has a depth of 0.
        return 0;
    }

    // Recursively calculate the depth of left and right subtrees.
    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);

    // Return the maximum of the two depths plus 1 (for the current node).
    return 1 + (leftDepth > rightDepth ? leftDepth : rightDepth);
}

int main() {
    // Constructing a sample binary tree manually.
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    // Compute the maximum depth of the tree.
    int depth = maxDepth(root);

    printf("The maximum depth of the binary tree is: %d\n", depth);

    // Fun closure.
    printf("Binary trees: Nature's way of teaching recursion one branch at a time!\n");

    return 0;
}
