/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Integer> postorderTraversal(TreeNode root) {
        List<Integer> ll= new ArrayList<>();
        Stack<TreeNode> st= new Stack<>();
        if(root==null)return ll;
       TreeNode Last_Visited=null;
        while(!st.isEmpty() || root!=null){
            if(root!=null){
                st.push(root);
                root=root.left;
            }
            else{
                TreeNode peek_node=st.peek();
                if(peek_node.right!=null&& peek_node.right!=Last_Visited){
                    root=peek_node.right;
                }else{
                    //no left and no right
                    ll.add(peek_node.val);
                   Last_Visited= st.pop();
                }
            }
        }
        return ll;
    }
}