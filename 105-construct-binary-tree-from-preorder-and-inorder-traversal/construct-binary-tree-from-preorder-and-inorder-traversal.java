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
    int preIdx=0;
    Map<Integer,Integer> map= new HashMap<>();
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        for(int i=0;i<inorder.length;i++){
            map.put(inorder[i],i);
        }
      return  built(preorder,0,preorder.length-1);
    }
    public TreeNode built(int[] preorder,int st,int end){
        if(st>end) return null;
        int rootval=preorder[preIdx++];
        TreeNode root= new TreeNode(rootval);
        int idx=map.get(rootval);
       root.left= built(preorder,st,idx-1);
       root.right= built(preorder,idx+1,end);

       return root;
    }

}