#include <stdio.h>
#include <stdlib.h>

// Binary Tree Level Order Traversal solution in C
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

void levelOrder(struct TreeNode* root) {
    if (root == NULL) return;

    struct TreeNode* queue[1000];
    int front = 0, rear = 0;

    queue[rear++] = root;

    while (front < rear) {
        struct TreeNode* current = queue[front++];
        printf("%d ", current->val);

        if (current->left)
            queue[rear++] = current->left;
        if (current->right)
            queue[rear++] = current->right;
    }
}
