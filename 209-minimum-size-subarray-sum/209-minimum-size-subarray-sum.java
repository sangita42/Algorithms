class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int n=nums.length;
        int i=0,j=0;
        int sum=0;
        int ans=Integer.MAX_VALUE;
        while(j<n){
            sum+=nums[j];// sum=6+3=9
           
             while(sum>=target){
                 ans=Math.min(ans,j-i+1);//ans=2
                    sum-=nums[i];//9-2=7
                    i++;//i=4
                }
            j++;//j=5
            
        }
        if(ans==Integer.MAX_VALUE){
            return 0;
        }
        return ans;
        
    }
}