class Solution {
public:
    int minJump(int ind,int n,vector<int>&nums,vector<int>&dp){
        if(ind>=n){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
         int ans=100001;
        for(int i=1;i<=nums[ind];i++){
            ans=min(ans,1+minJump(ind+i,n,nums,dp));
        }
        return dp[ind]=ans;
    }
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return minJump(0,nums.size()-1,nums,dp);
        
    }
};