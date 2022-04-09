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
    int ans=-1;
    int c=1;
    void kth(TreeNode root,int k){
        if(root==null){
            return;
        }
        kth(root.left,k);
        if(c==k){
            ans=root.val;
            c++;
            return;
            
        }
        else{
            c++;
        }
        kth(root.right,k);
        
    }
    public int kthSmallest(TreeNode root, int k) {

        kth(root,k);
        return ans;
        
    }
}