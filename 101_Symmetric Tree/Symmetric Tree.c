/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool traverse(struct TreeNode *left, struct TreeNode *right){
    if(left == NULL && right == NULL){
        return true;
    }
    
    if(left == NULL || right == NULL){
        return false;
    }
    if(left->val != right->val){
        return false;
    }
    
    return traverse(left->left, right->right)&&traverse(left->right, right->left);
}
bool isSymmetric(struct TreeNode* root) {
    if(root == NULL){
        return true;
    }
    
    return traverse(root->left, root->right);
}