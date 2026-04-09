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
    public List<Integer> preorderTraversal(TreeNode root) {
        Stack<TreeNode> st = new Stack<>();
        List<Integer> ll = new ArrayList<>();
        if (root == null)
            return ll;
        st.add(root);
        while (!st.isEmpty()) {
            TreeNode node = st.pop();
            ll.add(node.val);
            if (node.right != null)
                st.add(node.right);
            if (node.left != null)
                st.add(node.left);

        }
        return ll;
    }
}