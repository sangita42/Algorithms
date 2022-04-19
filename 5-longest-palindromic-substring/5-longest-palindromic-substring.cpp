class Solution {
public:
    string longestcommonssubstring(string s1,string s2){
        int n=s1.length();
        int m=s2.length();
        vector<vector<string>>dp(n+1,vector<string>(m+1,""));
        for(int i=0;i<=n;i++){
            dp[i][0]="";
        }
        for(int j=0;j<=m;j++){
            dp[0][j]="";
        }
        int ans=0;
        string res="";
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=s1[i-1]+dp[i-1][j-1];
                    string t=dp[i][j];
                    if(t.length()>res.length()){
                        
                        res=t;
                        
                    }
                    
                }
                else{
                    dp[i][j]="";
                }
            }
        }
        return res;
        
    }
    string longestPalindrome(string s) {
        //babad -> b ,ba, bab, baba, babad
        int n=s.length();
       int dp[n][n];
        memset(dp,0,sizeof(dp));
        int maxLen=1,start=0;
        for(int i=0;i<n;i++){
            dp[i][i]=1;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=1;
                maxLen=2;
                start=i;
            }
        }
        for(int k=3;k<=n;k++){
            for(int i=0;i<n-k+1;i++){
                int j=i+k-1;
                if(s[i]==s[j] && dp[i+1][j-1]==1){
                    dp[i][j]=1;
                    if(k>maxLen){
                        maxLen=k;
                        start=i;
                    }
                }
            }
        }
        return s.substr(start,maxLen);
       
        
    }
};