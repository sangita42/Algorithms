class Solution {
public:
    void solve(int ind,vector<int>&nums,vector<int>&v,set<vector<int>>&ans,int n){
        if(ind==n){
            
            ans.insert(v);
            return;
        }
        for(int i=ind;i<n;i++){
            v.push_back(nums[i]);
            solve(i+1,nums,v,ans,n);
            v.pop_back();
            solve(i+1,nums,v,ans,n);
        }
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>v;
        vector<vector<int>>ans;
        set<vector<int>>s;
        int n=nums.size();
        solve(0,nums,v,s,n);
        for(auto it:s){
            ans.push_back(it);
            }
        return ans;
    }
};