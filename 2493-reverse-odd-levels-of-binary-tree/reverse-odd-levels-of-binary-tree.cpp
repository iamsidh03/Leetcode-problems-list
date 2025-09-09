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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(!root) return nullptr;
        queue<TreeNode*>q;
        q.push(root);
        // vector<TreeNode*>ans;
        int level=-1;
        
        while(!q.empty()){
            int n=q.size();
            level++;
           vector<TreeNode*>v;
            while(n--){
                TreeNode* temp=q.front();
                q.pop();
                v.push_back(temp);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
               if(level%2==1){//odd
                int left=0,right=v.size()-1;
                // st.push(temp->val);
                while(left<right){
                swap(v[left]->val,v[right]->val);
                left++;right--;
                }

            }
            
        }
        return root;

    }
};