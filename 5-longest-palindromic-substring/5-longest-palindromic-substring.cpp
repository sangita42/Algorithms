class Solution {
public:
    
    
    string longestPalindrome(string s) {
        int n=s.length();
        if(n==0){
            return "";
        }
        if(n==1){
            return s;
        }
        int start=0;
        bool dp[n][n];
        int maxlen=1;
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++){
            dp[i][i]=true;
            
        }
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                dp[i][i+1]=true;
                start=i;
                maxlen=2;
            }
        }
        int k=3;
        for(int k=3;k<=n;k++){
            for(int i=0;i<n-k+1;i++){
                int j=i+k-1;
                if(s[i]==s[j]&&dp[i+1][j-1]){
                    dp[i][j]=true;
                    if(k>maxlen){
                        maxlen=k;
                        start=i;
                    }
                }
            }
        }
          
        return s.substr(start,maxlen);
        
    }
};