class Solution {
public:
    int climb(int i,vector<int>&dp){
        if(i==0){
            return 1;
            
        }
        if(i==1){
            return 1;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        if(i<0){
            return 0;
        }
        
        return dp[i]=climb(i-1,dp)+climb(i-2,dp);
        
    }
    int climbStairs(int n) {
       int dp[n+1];
        dp[0]=1;
        dp[1]=1;// dp[2]=2 dp[3]=3
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
        
    }
};