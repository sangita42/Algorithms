class Solution {
public:
    // "hor" ""
    // ""  "hor"
    int editDistance(int i,int j,string word1,string word2,vector<vector<int>>&dp){
        if(i<0){
            return j+1;
        }
        if(j<0){
            return i+1;
            
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        if(word1[i]==word2[j]){
            return dp[i][j]= editDistance(i-1,j-1,word1,word2,dp);
        }
        return dp[i][j]=1+ min(min(editDistance(i-1,j-1,word1,word2,dp), editDistance(i-1,j,word1,word2,dp))
                      ,editDistance(i,j-1,word1,word2,dp));
        
    }
    int minDistance(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return editDistance(n-1,m-1,word1,word2,dp);
    }
};