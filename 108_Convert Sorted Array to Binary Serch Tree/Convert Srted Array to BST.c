/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* convert(int *nums, int start, int end){
   int mid = start + (end-start)/2;
    struct TreeNode *node = malloc(sizeof(*node));
    
    node->val = nums[mid];
    node->left = mid > start? convert(nums, start, mid-1):NULL;
    node->right = mid < end? convert(nums, mid+1, end):NULL;
    
    return node;
    

}
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    
    if(numsSize == 0) return NULL;
    
    return convert(nums, 0, numsSize-1);
    
}