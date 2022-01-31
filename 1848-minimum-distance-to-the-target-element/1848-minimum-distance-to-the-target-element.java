class Solution {
    public int getMinDistance(int[] nums, int target, int start) {
        int n=nums.length;
        int mini= Integer.MAX_VALUE;
        int index=0;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                if(Math.abs(i-start)<mini){
                    mini=Math.abs(i-start);
                    index=Math.abs(i-start);
                    
                }
                
            }
        }
        
        return index;
    }
}