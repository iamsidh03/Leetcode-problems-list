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
    vector<int> rightSideView(TreeNode* root) {
       vector<int> ans;
        if(!root) return ans;
        

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int s=q.size();
            bool push=true;
            while(s--){
                TreeNode* temp=q.front();
                q.pop();
                if(push){
                    ans.push_back(temp->val);
                    push=false;
                }
                if(temp->right){
                    q.push(temp->right);
                }
                if(temp->left){
                    q.push(temp->left);
                }
            }
        }
        return ans;
    }
};