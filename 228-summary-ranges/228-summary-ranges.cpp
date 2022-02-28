class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int i=0,j=0;
        vector<string>v;
        int n=nums.size();
       
        while(i<n){
            j=i+1;
            
            while(j<n&&nums[j]==nums[j-1]+1){
                j++;
            }
            string s="";
            if(nums[i]==nums[j-1]){
                 v.push_back(to_string(nums[i]));
            }
            else{
             v.push_back(to_string(nums[i])+"->"+to_string(nums[j-1]));
            }
            
            i=j;
        }
       
        return v;
        
    }
};