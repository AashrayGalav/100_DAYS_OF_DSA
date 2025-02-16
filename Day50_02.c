#include <stdio.h>
#include <stdlib.h>

// Search in BST solution in C
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};
struct TreeNode* searchBST(struct TreeNode* root, int val) {
    if (root == NULL || root->val == val)
        return root;

    if (val < root->val)
        return searchBST(root->left, val);
    else
        return searchBST(root->right, val);
}
int main() {
    int n;
    scanf("%d", &n);
    
    // Implementation here
    printf("Result\n");
    return 0;
}
