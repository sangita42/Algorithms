class Solution {
public:
    bool palindrome(string s, int start, int end){
        while(start<=end){
            if(s[start]!=s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    void pal(int ind, string s,vector<string>&ans,vector<vector<string>>&res ){
        if(ind==s.length()){
            res.push_back(ans);
            return;
        }
        for(int i=ind;i<s.length();i++){
            if(palindrome(s,ind, i)){
                ans.push_back(s.substr(ind,i-ind+1));
                pal(i+1,s,ans,res);
                ans.pop_back();
                
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>ans;
        vector<vector<string>>res;
        pal(0,s,ans,res);
        return res;
        
    }
};