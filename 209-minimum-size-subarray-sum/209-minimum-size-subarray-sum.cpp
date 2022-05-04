class Solution {
public:
    // 2 3 1 2 4 3 
    //k = 3 -> 6, 6, 7,9 = 9
    //k=2 5 4 3 7 
    // 2 3 1 2 4 3 low=1, high=2 mid=2
    int maxsubarray(vector<int>& nums,int target,int k){
        int i=0,j=0;
        int n=nums.size();
        int sum=0;
        int ans=0;
        while(j<n){
            sum+=nums[j];// sum= 5
            if(j-i+1==k){
               
                ans=max(ans,sum);//ans=6
                sum-=nums[i];
                i++;
            }
            j++;
            
            
        }
        return ans;
        
    }
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=1,high=nums.size()+1;
        //low=4,high=5
        bool ans=false;
        while(low<high){
            int mid=(low+high)/2;//low=5
            if(maxsubarray(nums,target,mid)>=target){//
                ans=true;
                
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        if(ans) return low;
        return 0;
        
        
        
    }
};