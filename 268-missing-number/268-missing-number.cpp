class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0;
        // 3 0 1
        while(i<nums.size()){
            int correct = nums[i];//0-1
            if(nums[i]<nums.size()&&nums[i]!=nums[correct]){
                swap(nums[i],nums[correct]);
                
            }
            else{
                i++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                return i;
            }
        }
        return nums.size();
        
    }
};