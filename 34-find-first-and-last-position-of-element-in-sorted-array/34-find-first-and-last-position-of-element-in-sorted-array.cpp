class Solution {
public:
    int first(vector<int>& nums, int target){
         int low=0,high=nums.size()-1;
        int ind=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                high=mid-1;
                ind=mid;
            }
        }
        return ind;
        
    }
    int last(vector<int>& nums, int target){
         int low=0,high=nums.size()-1;
        int ind=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
                ind=mid;
            }
        }
        return ind;
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first1=first(nums,target);
        int last1=last(nums,target);
        vector<int>v;
        v.push_back(first1);
        v.push_back(last1);
        return v;
        
       
        
    }
};