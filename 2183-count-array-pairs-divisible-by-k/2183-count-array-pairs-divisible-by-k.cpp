class Solution {
public:
    int gcd(int x,int y){
        if(x==0){
            return y;
        }
        return gcd(y%x,x);
    }
    long long coutPairs(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        long long c=0;
        for(int i=0;i<nums.size();i++){
            int m=gcd(nums[i],k);
            int op=k/m;
            
            
            for(auto it:mp){
                if(it.first%op==0){
                    c+=it.second;
                }
            }
            mp[m]++;
        }
        return c;
        
    }
};