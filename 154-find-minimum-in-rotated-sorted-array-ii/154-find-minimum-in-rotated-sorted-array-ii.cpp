class Solution {
public:
    // 0 1 1 1 1 low=0, mid=0 high-1 ,
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<nums[high]){
                high=mid;
            }
            else if(nums[mid]>nums[high]){
                low=mid+1;
            }
            else{
                high--;
            }
        }
        return nums[low];
        
    }
};