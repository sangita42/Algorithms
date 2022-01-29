/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode *root,vector<string>&v,string t){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            v.push_back(t);
            return;
        }
        if(root->left!=NULL){
             helper(root->left,v,t+"->"+to_string(root->left->val));
            
        }
        if(root->right!=NULL){
             helper(root->right,v,t+"->"+to_string(root->right->val));
            
        }
        
       
       
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>v;
        helper(root,v,to_string(root->val));
        return v;
        
        
        
    }
};