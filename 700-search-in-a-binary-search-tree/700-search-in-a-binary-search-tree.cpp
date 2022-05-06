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
    
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *ans=NULL;
        while(root!=NULL){
            if(root->val==val){
                ans=root;
                break;
                
            }
            else if(root->val>val){
                root=root->left;
                
            }
            else{
                root=root->right;
                
            }
        }
        return ans;
        
        
    }
};