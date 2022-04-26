class Solution {
public:
    // [1, 5,11,5] ->  [1,5,5], [11]
    // [1,5,11,5]-> 22/2=11 
    // need to find a subset with sum 11
    // [1] [1,5] [1,5,11] [5,5]
    //pick = 1+f(1)-> p=5+f(2) and np=f(2) -> p=11+0f(3) np=f(3) ->5+0.f(4) np=0.f(4) 
    //not=f(1)
    bool findSubset(int ind,vector<int>& nums,int target){
        if(target==0) return true;
        if(ind==nums.size()-1){
            if(nums[ind]==target){
                return true;
            }
            return false;
        }
        bool pick=false;
        if(nums[ind]<=target){
             pick=findSubset(ind+1,nums,target-nums[ind]);
        }
        
        bool notpick=0+findSubset(ind+1,nums,target); 
        return pick|notpick;
        
    }
    
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i]; 
        }
        if(sum%2!=0){
            return false;
        }
        int target=sum/2;
        int n=nums.size();
        vector<vector<bool>>dp(n,vector<bool>(target+1,false));
        
        for(int i=0;i<n;i++){
            dp[i][0]=true;
        }
        if(nums[0]==target){
            dp[0][nums[0]]=true;
            }
        for(int i=1;i<n;i++){
            for(int j=1;j<=target;j++){
                
                
                 bool pick=false;
        if(nums[i]<=j){
             pick=dp[i-1][j-nums[i]];
        }
        
        bool notpick=dp[i-1][j]; 
        dp[i][j]= pick|notpick;
                
            }
        }
        
        return dp[n-1][target];
    }
};