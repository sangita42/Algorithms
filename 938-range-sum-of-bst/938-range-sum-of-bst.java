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
    int sum=0;
    void helper(TreeNode root, int L, int R){
         if(root == null){
            return;
        }
        if(root.val <= R && root.val >= L){
            sum += root.val;
        }
             
            helper(root.right, L, R);
             
        
            helper(root.left, L, R); 
        
        
    }
    public int rangeSumBST(TreeNode root, int low, int high) {
        
        helper(root,low,high);
        
        return sum;
        
        
    }
}