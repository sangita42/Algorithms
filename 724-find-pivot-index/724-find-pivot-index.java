class Solution {
    public int pivotIndex(int[] nums) {
        int sum=0;
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
        }
        int left=0,right=sum;
        for(int i=0;i<nums.length;i++){
            right=right-nums[i];
            if(left==right){
                return i;
            }
            left=left+nums[i];
        }
        return -1;
        
    }
}