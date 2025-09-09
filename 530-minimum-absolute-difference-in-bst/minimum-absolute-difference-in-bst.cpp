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
    TreeNode* prev=NULL;
      int ans = INT_MAX;
      void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        if(prev!=NULL){
            ans=min(ans,root->val-prev->val);
        }
        prev=root; // updating prev
        inorder(root->right);
      }

       int getMinimumDifference(TreeNode* root) {
            inorder(root);
            return ans;
       }
    // int getMinimumDifference(TreeNode* root) {
    //     if(!root) return 0;
    //     // int ans=INT_MAX;
    //     if(root->left){
    //         int leftval=getMinimumDifference(root->left);
    //        ans=min(ans,leftval);
    //     }
    //     if(prev!=NULL){
    //         ans=min(ans,root->val-prev->val);
    //     }
    //     prev=root;
    //     if(root->right){
    //         int rightval=getMinimumDifference(root->right);
    //         ans=min(ans,rightval);
    //     }
    //     return abs(ans);

    // }
};