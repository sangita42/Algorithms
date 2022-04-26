class Solution {
public:
     int pathSum(vector<vector<int>>& grid,int i,int j){ // 2,2
        if(i==0 &&j==0){
            return grid[0][0]; 
        }
        if(i<0||j<0){
            return 1e9;
        }
        int left=grid[i][j]+pathSum(grid,i-1,j); 
        int right=grid[i][j]+pathSum(grid,i,j-1);//right=
       
        return min(left,right);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int dp[n][m];
        memset(dp,0,sizeof(dp));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0&&j==0){
                    dp[i][j]=grid[i][j];
                }
                else{
                int left=grid[i][j];
                int right=grid[i][j];
                if(i-1>=0){
                 left+=dp[i-1][j];
                }
                    else{
                        left=1e9;
                    }
                if(j-1>=0){
                 right+=dp[i][j-1];
                }
                    else{
                        right=1e9;
                    }
                dp[i][j]=min(left,right);
                
                }
            }
        }
        return dp[n-1][m-1];
        
    }
};