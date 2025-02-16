#include <stdlib.h>
#include <stddef.h>

// Define TreeNode structure if not already defined
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

int preorder(int* arr, struct TreeNode* root, int index) {
    if (root != NULL) {
        arr[index++] = root->val;
        index = preorder(arr, root->left, index);
        index = preorder(arr, root->right, index);
    }
    return index;
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr = (int*)malloc(100 * sizeof(int));
    *returnSize = preorder(arr, root, 0);
    return arr;
}