class Solution {
    
    // 10,15,20 -> func(2,3,0)-> func(1,3,20) -> func(0,0,35) -> func(-1,3,45) ->
    //                           func(0,3,15)    func(-2,0,30)    func(-2,0,)
    
    int costmin(int n,int[] cost,int[] dp){
        if(n<=0) return 0;
        if(dp[n]!=-1){
            return dp[n];
        }
        int left=cost[n-1]+costmin(n-1,cost,dp);
        int right=0;
        if(n>=2){
            right=cost[n-2]+costmin(n-2,cost,dp);
        }
        return dp[n]=Math.min(left,right);
    }
    
    public int minCostClimbingStairs(int[] cost) {
        int n=cost.length;
        int[] dp=new int[n+1];
        Arrays.fill(dp,-1);
        return costmin(n,cost,dp);
        
    }
}