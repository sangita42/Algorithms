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
    bool search(TreeNode *root,long long int minRange,long long int maxRange){
        if(root==NULL){
            return true;
        }
        if(root->val>=maxRange || root->val<=minRange){
            return false;
        }
       
        return search(root->left,minRange,root->val) && search(root->right,root->val,maxRange);
    }
    bool isValidBST(TreeNode* root) {
        return search(root,LONG_MIN,LONG_MAX);
        
    }
};