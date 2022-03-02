class Solution {
public:
    int dfs(int i,int j,int end1, int end2,int n,int m, 
           vector<int>& rowCosts, vector<int>& colCosts,vector<vector<int>>&dp){
        if(i<0||j<0||i>n||j>m) return 1e9;
        if(i==end1&&j==end2) return 1; //min(rowCosts[i],colCosts[j]);
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int up=rowCosts[i]+dfs(i-1,j,end1,end2,n,m,rowCosts,colCosts,dp);
        int down=rowCosts[i]+dfs(i+1,j,end1,end2,n,m,rowCosts,colCosts,dp);
        int right=colCosts[j]+dfs(i,j+1,end1,end2,n,m,rowCosts,colCosts,dp);
        int left=colCosts[j]+dfs(i,j-1,end1,end2,n,m,rowCosts,colCosts,dp);
        return dp[i][j]=min(min(up,down),min(right,left));
        
            
    }
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) {
         int ret = 0;
        while(startPos[0]<homePos[0])
            ret += rowCosts[++startPos[0]];
        while(startPos[0]>homePos[0])
            ret += rowCosts[--startPos[0]];
        while(startPos[1]<homePos[1])
            ret += colCosts[++startPos[1]];
        while(startPos[1]>homePos[1])
            ret += colCosts[--startPos[1]];
        return ret;
        
    }
};