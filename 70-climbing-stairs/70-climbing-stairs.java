class Solution {
    int climb(int i,int n,int[] dp){
        if(i==n){
            return 1;
        }
        if(i>n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        return dp[i]=climb(i+1,n,dp)+climb(i+2,n,dp);
    }
    public int climbStairs(int n) {
        // func(0,3)-> 2.func(1,3)->1.func(2,3)+1.func(3,3)->  1.func(3,3)+0.func(4,3)
                       //1.func(2,3)->1.func(3,3)+func(4,3)
        int[] dp=new int[n+1];
        //Arrays.fill(dp,-1);
        dp[0]=1;
        for(int i=1;i<=n;i++){
            int left=0;
            if(i>1){
                left=dp[i-2];
            }
            dp[i]=dp[i-1]+left;
        }
         return dp[n];                  
    }
}