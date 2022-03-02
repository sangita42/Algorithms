class Solution {
public:
    int dfs(int i,int j,int n,int m,vector<vector<int>>& grid,vector<vector<int>>& dp){
        if(i>n-1||j>m-1) return 1e9;
        if(i==n-1&&j==m-1) return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int right=grid[i][j]+dfs(i+1,j,n,m,grid,dp);
        int down=grid[i][j]+dfs(i,j+1,n,m,grid,dp);
        dp[i][j]=min(right,down);
        return dp[i][j];
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return dfs(0,0,n,m,grid,dp);
        
    }
};