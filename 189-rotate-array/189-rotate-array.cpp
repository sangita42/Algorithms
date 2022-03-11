class Solution {
public:
    void reverse(vector<int>& nums,int low,int high){
        
        while(low<high){
            swap(nums[low],nums[high]);
            low++;
            high--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int a = n-k;
        reverse(nums,0,a-1);
        reverse(nums,a,n-1);
        reverse(nums,0,n-1);
        
    }
};