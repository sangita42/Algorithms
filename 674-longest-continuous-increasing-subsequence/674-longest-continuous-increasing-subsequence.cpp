class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
         int n=nums.size();
          int countofLongestSubsequence=1;
        int count=1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                count++;
                countofLongestSubsequence=max(countofLongestSubsequence,count);
            }
            else{
                count=1;
            }
           
        }
        return countofLongestSubsequence ;
        
    }
};