class Solution {
public:
    bool ispossible(string &s1,string &s2){
        if(s1.length()!=s2.length()+1){
            return false;
        }
        int first=0, second=0;
        while(first<s1.length()){
            if(second<s2.length()&&s1[first]==s2[second]){
                first++;
                second++;
            }
            else{
                first++;
            }
        }
        if(first==s1.length()&&second==s2.length()){
            return true;
        }
        return false;
    }
    static bool comp(string &s1,string &s2){
       return s1.size()<s2.size();
    }
    int longestStrChain(vector<string>& words) {
        int n=words.size();
        sort(words.begin(),words.end(),comp);
        vector<int> dp(n,1);
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(1+dp[j]>dp[i]&&ispossible(words[i],words[j])){
                    dp[i]=1+dp[j];
                }
            }
            maxi=max(maxi,dp[i]);
        }
        return maxi;
        
    }
};