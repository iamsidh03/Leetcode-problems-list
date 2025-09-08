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
    int countNodes(TreeNode* root) {
        //approach : perform level order and count number of node
        queue<TreeNode*>q;
        
        q.push(root);
        int cnt=0;
         TreeNode* temp;
         if(!root) return 0;
        while(!q.empty()){
          temp =q.front();
            q.pop();
            cnt++;
            if(temp->left){
                q.push(temp->left);
            }if(temp->right){
                q.push(temp->right);
            }
        }
        return cnt;
    }
};