class Solution {
public:
    //rabbbit rabbit
    //
    int count(int i,int j,string s,string t, vector<vector<int>>&dp){
         if(j<0){
            return 1;
        }
        if(i<0){
            return 0;
            
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
       
        if(s[i]==t[j]){
            return dp[i][j]=count(i-1,j-1,s,t,dp)+count(i-1,j,s,t,dp);
        }
     
            return dp[i][j]=count(i-1,j,s,t,dp);
        
    }
    
    int numDistinct(string s, string t) {
        int n=s.length();
        int m=t.length();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return count(n-1,m-1,s,t,dp);
        
        
    }
};