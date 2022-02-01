class Solution {
    
    public int[] searchRange(int[] nums, int target) {
        int[] ans=new int[2];
        int first=firstoc(nums,target);
        int last = lastoc(nums,target);
        ans[0]=first;
        ans[1]=last;
        return ans;
        
    }
    public int firstoc(int[] nums, int target){
        int low=0;
        int high=nums.length-1;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                ans=mid;
                high=mid-1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return ans;
    }
    public int lastoc(int[] nums, int target){
        int low=0;
        int high=nums.length-1;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                ans=mid;
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return ans;
    }
}