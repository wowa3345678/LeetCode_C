/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int deep(struct TreeNode* root, bool *balance){
    if(!(*balance)|| root == NULL ) return 0;
    
    int l = deep(root->left, balance)+1;
    int r = deep(root->right,balance)+1;
    
    if(*balance){
        int diff = l>r? l - r: r - l;
       // *balance = diff <2;
        if(diff <2)
            *balance = true;
        else
            *balance = false;
        
    }
    return l > r? l:r;
}
bool isBalanced(struct TreeNode* root) {
    
    bool balance = true;
    deep(root, &balance);
    return balance;
    
}