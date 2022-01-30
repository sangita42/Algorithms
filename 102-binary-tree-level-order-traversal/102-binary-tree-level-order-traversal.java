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
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> l1 = new ArrayList<>();
        Queue<TreeNode> q = new LinkedList<>();
        if(root==null){
            return l1;
        }
        q.add(root);
        while(!q.isEmpty()){
            int s=q.size();
           
             List<Integer> l2 =new ArrayList<>();
            for(int i=0;i<s;i++){
            TreeNode node = q.poll();
           
            
            l2.add(node.val);
            
            if(node.left!=null){
                q.add(node.left);
            }
            if(node.right!=null){
                q.add(node.right);
            }
            }
            l1.add(l2);
            
        }
        return l1;
        
        
    }
}