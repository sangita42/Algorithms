class Solution {
public:
    //1 2 3 4 5 6
    // 6 5 4 3 2
    int findPeakElement(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        while(low<high){
            int mid=(low+high)/2;
            if(nums[mid]>nums[mid+1]){
                high=mid;
            }
            else{
                low=mid+1;
            }
            
        }
        return low;
        
    }
};