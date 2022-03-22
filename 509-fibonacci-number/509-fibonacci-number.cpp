class Solution {
public:
    int fibo(int n,vector<int>&dp){
        if(dp[n]!=-1){
            return dp[n];
        }
        if(n==0||n==1){
            dp[n]= n;
        }
        else{
            dp[n]= fibo(n-1,dp)+fibo(n-2,dp);
        }
        return dp[n];
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return fibo(n,dp);
        
        
    }
};