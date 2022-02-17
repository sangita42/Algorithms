class Solution {
public:
    void helper(int ind,vector<int>& candidates, int target,vector<int>&ds,vector<vector<int>>&ans){
        if(ind==candidates.size()){
            if(target==0){
                ans.push_back(ds);
            }
            
                return;
            
        }
        if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            helper(ind,candidates,target-candidates[ind],ds,ans);
            ds.pop_back();
        }
    helper(ind+1,candidates,target,ds,ans);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>v;
        vector<vector<int>> v1;
        helper(0,candidates,target,v,v1);
        return v1;
    }
    
};