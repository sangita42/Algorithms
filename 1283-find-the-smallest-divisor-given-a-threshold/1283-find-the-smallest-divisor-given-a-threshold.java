class Solution {
    public int smallestDivisor(int[] nums, int threshold) {
        int low=1;
        int maxi=nums[0];
        for(int i=0;i<nums.length;i++){
            if(maxi<nums[i]){
                maxi=nums[i];
            }
        }
        
        int high=maxi;
        int ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            if(blackbox(nums,nums.length,mid)<=threshold){
                ans=mid;
                high=mid-1;
                
            
            }
            else{
                low=mid+1;
            }
        }
        return ans;
 
        
    }
    public int blackbox(int[] nums, int n,int div){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(nums[i]/div);
            if(nums[i]%div!=0){
                sum+=1;
            }
            
        }
        return sum;
    }
}