class Solution {
    boolean reach(int ind,int n,int[] nums,Boolean[] dp){
         if(dp[ind] != null) {
            return dp[ind];
        }
        if(ind==n-1){
            return true;
            
        }
       
        for(int i=1;i<=nums[ind];i++){
        if (reach(ind+i,n,nums,dp)){
            return dp[ind]=true;
        }
            }
        return dp[ind]=false;
        
    }
    public boolean canJump(int[] nums) {
        int n=nums.length;
        Boolean[] dp = new Boolean[n];
       
        return reach(0,n,nums,dp);
        
    }
}