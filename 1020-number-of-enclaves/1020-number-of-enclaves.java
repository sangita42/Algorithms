class Solution {
    public void dfs(int i,int j,int[][] grid,int n,int m){
        if(i<0||j<0||i>=n||j>=m||grid[i][j]!=1){
            return;
        }
        grid[i][j]=2;
        dfs(i,j+1,grid,n,m);
        dfs(i,j-1,grid,n,m);
        dfs(i+1,j,grid,n,m);
        dfs(i-1,j,grid,n,m);
        
    }
    public int numEnclaves(int[][] grid) {
        int n=grid.length;
        int m=grid[0].length;
       for(int i=0;i<n;i++){
            if(grid[i][0]==1){
                dfs(i,0,grid,n,m);
            }
            if(grid[i][m-1]==1){
                 dfs(i,m-1,grid,n,m);
                
            }
                
        }
        for(int i=0;i<m;i++){
            if(grid[0][i]==1){
                 dfs(0,i,grid,n,m);
            }
            if(grid[n-1][i]==1){
                dfs(n-1,i,grid,n,m);
            }
        }
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    c++;
                }
            }
        }
        return c;
        
    }
}