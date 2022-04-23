class Solution {
public:
    int characterReplacement(string s, int k) {
        // a=1
        int i=0,j=0;
        int n=s.length();
        unordered_map<char,int>mp;
        int ans=INT_MIN;
        int res=0;
        
        while(j<n){
            mp[s[j]]++;
            ans=max(ans,mp[s[j]]);
            if((j-i+1)-ans>k){
                mp[s[i]]--;
                i++;
            }
            res=max(res,j-i+1);    
            j++;
            
        }
        return res;
        
    }
};