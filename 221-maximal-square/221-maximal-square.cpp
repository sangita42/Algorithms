class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
              
                    dp[i][j]=0;
                
            }
        }
       
        int area=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(matrix[i-1][j-1]=='1'){
                    dp[i][j]=1+min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);
                area = max(area,dp[i][j]);
                
                }
                
            }
        }
        return area*area;
        
    }
};