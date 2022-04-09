/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    TreeNode lca(TreeNode root,TreeNode p,TreeNode q){
		if(root==p||root==null||root==q){
			return root;
		}
		TreeNode left=lca(root.left,p,q);
		TreeNode right=lca(root.right,p,q);
		if(left==null){
			return right;
		}
		else if(right==null){
			return left;
		}
		else{
			return root;
		}
		
	}
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        return lca(root,p,q);
        
        
    }
}