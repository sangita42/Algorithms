/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* common(TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==NULL || root==p||root==q){
            return root;
        }
        TreeNode* left=common(root->left,p,q);
        TreeNode* right=common(root->right,p,q);
        if(left==NULL){
            return right;
        }
        if(right==NULL){
            return left;
        }
        return root;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return common(root,p,q);
        
    }
};