class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        int c=0,tot=0;
        for(int i=2;i<n;i++){
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){
                c++;//2
                tot=tot+c;//2
            }
           else{
               c=0;
           }
            
        }
        return tot;
        
    }
};