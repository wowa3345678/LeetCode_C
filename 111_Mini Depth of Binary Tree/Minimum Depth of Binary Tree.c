/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) {
    
    if(root == NULL) return 0;
    
    int l = minDepth(root->left) +1;
    int r = minDepth(root->right)+1;
    
    return l<r?(l>1?l:r):(r>1?r:l);
    
}