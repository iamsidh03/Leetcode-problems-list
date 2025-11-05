/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

     int maxval;
    int helper(TreeNode* root){
         if(!root) return 0;
        int l=helper(root->left);
        int r=helper(root->right);
        
        int case1=l+r+root->val;
        int case2=max(l,r)+root->val;
        int case3=root->val;

         maxval=max({maxval,case1,case2,case3});
        return max(case2,case3);
    }
    int maxPathSum(TreeNode* root) {
        // l+r+root->val (ye ak answer hai)
        // max(r,l)+root->val 
        // root->val
        maxval=INT_MIN;
        helper(root);
        return maxval;
    }
};