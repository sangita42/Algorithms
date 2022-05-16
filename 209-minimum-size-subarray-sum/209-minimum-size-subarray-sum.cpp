class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        int sum=0;
        int ans=INT_MAX;
        while(j<n){//5
            sum+=nums[j];//
            while(sum>=target){
                 ans=min(ans,j-i+1);
                sum-=nums[i];//6
                i++;//3
            }
           //2
            j++;
        }
        if(ans==INT_MAX){
            return 0;
        }
        return ans;
    }
};