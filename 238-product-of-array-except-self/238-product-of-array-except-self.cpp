class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul=1;
        vector<int> v;
        int c=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c++;
            }
            mul=mul*nums[i];
           
            
            
           
        }
        
        if(c>1){
            for(int i=0;i<nums.size();i++){
                v.push_back(0);
            }
            return v;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                v.push_back(mul/nums[i]);
                
            }
            else{
                int multi=1;
                for(int j=0;j<nums.size();j++){
                    if(nums[j]!=0){
                        multi=multi*nums[j];
                    }
                }
                v.push_back(multi);
            }
        }
        return v;
        
    }
};