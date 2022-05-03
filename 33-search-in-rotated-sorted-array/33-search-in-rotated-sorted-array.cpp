class Solution {
public:
    int search(vector<int>& nums, int target) {
        // 12,5,6,7,0,1,9 target=0
        //mid= 7
        //low=0 high=2 mid=1 high=0
        // 1 2 3 4 5 6 target =5
        int n=nums.size();
        int low=0, high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
           
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>=nums[low]){
                if(target>=nums[low]&& target<=nums[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(target>=nums[mid]&& target<=nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};