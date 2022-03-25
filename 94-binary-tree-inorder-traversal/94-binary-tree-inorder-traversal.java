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
    public List<Integer> inorderTraversal(TreeNode root) {
        
        List<Integer>v=new ArrayList<>();
        Stack<TreeNode> st = new Stack<TreeNode>();
        
        while(root!=null || st.size()>0){
            while(root!=null){
                st.push(root);
                root=root.left;
            }
            root=st.pop();
            v.add(root.val);
            root=root.right;
            
        }
         return v;
    }
   
}