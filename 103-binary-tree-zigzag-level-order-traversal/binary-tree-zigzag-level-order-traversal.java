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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> ans= new ArrayList<>();
        Queue<TreeNode> q= new ArrayDeque<>();
        if(root==null) return new ArrayList<>();
        q.offer(root);
        TreeNode curr;
        boolean LeftToRight=true;
        while(!q.isEmpty()){
            int size=q.size();
            
            List<Integer> ll= new ArrayList<>();

            while(size>0){
                curr=q.poll();
                
                    if(LeftToRight){
                        ll.add(curr.val);
                    }
                    else{
                        ll.add(0,curr.val);
                    }
                    
                    if(curr.left!=null) q.offer(curr.left);
                    if(curr.right!=null) q.offer(curr.right);
                   
                
                size--;
            }
             LeftToRight=!LeftToRight;
            ans.add(ll);
        }
        return ans;
    }
}