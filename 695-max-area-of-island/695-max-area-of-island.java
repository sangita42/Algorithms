class Solution {
    
    public int dfs(int[][] grid,int i,int j,int n,int m,int c){
        if(i<0||j<0||i>=n||j>=m||grid[i][j]==0) return c;
      
            
            grid[i][j]=0;
            c++;
            c=dfs(grid,i+1,j,n,m,c);
             c=dfs(grid,i-1,j,n,m,c);
             c=dfs(grid,i,j+1,n,m,c);
             c=dfs(grid,i,j-1,n,m,c);
            return c;
        
        
    }
    public int maxAreaOfIsland(int[][] grid) {
        int n=grid.length;
        int m=grid[0].length;
        int ans=0,c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    
                    int k=dfs(grid,i,j,n,m,0);
                    ans=Math.max(ans,k);
                }
            }
        }
        return ans;
        
    }
}