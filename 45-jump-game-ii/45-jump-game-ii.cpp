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
        vector<int>dp(nums.size(),INT_MAX);
        dp[0]=0;
        
        for(int ind=0;ind<nums.size();ind++){
            
            for(int j=1;j<=nums[ind]&&ind+j<nums.size();j++){
                dp[ind+j]=min(1+dp[ind],dp[ind+j]);
            }
            
        }
        
        return dp[nums.size()-1];
        
    }
};