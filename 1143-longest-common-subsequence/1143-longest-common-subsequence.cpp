class Solution {
public:
    int lcs(string s1,string s2,int n,int m,int dp[][1000]){
        if(n==0||m==0){
            return 0;
        }
        if(dp[n-1][m-1]!=-1){
            return dp[n-1][m-1];
        }
        if(s1[n-1]==s2[m-1]){
            dp[n-1][m-1]= 1+lcs(s1,s2,n-1,m-1,dp);
            return dp[n-1][m-1];
            
        }
        else{
            dp[n-1][m-1]= max(lcs(s1,s2,n-1,m,dp),lcs(s1,s2,n,m-1,dp));
             return dp[n-1][m-1];
        }
       
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length();
        int m= text2.length();
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0||j==0){
                    dp[i][j]=0;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(text1[i-1]==text2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
       return dp[n][m];
        
    }
};