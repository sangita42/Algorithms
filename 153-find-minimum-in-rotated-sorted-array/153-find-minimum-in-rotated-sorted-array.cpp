class Solution {
public:
    int findMin(vector<int>& nums) {
        // 0 1 2 4 5 6 7
        //  5 6 7 0 1 2
        //low=0 high = 7 mid= 3 4<7 high=mid= 3 
        int n=nums.size();
        int low=0, high=n-1;
        while(low<high){
            int mid=(low+high)/2;
            if(nums[mid]<nums[high]){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return nums[low];
    }
};