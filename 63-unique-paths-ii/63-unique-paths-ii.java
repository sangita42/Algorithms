class Solution {
    // i=2,j=2 fnc(2,2)-> func(1,2)+func(2,1)
    //                    func(0,2)+func(1,1)
    
    int finc(int i,int j,int[][] arr){
        
        if(i==0&&j==0 &&arr[i][j]!=1){
            return 1;
        }
        if(i<0|j<0||arr[i][j]==1){
            return 0;
        }
        return finc(i-1,j,arr)+finc(i,j-1,arr);
    }
    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        int n=obstacleGrid.length;
        int m=obstacleGrid[0].length;
        int[][] dp =new int[n][m];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(obstacleGrid[i][j]==1){
                    dp[i][j]=0;
                }
                else if(i==0&&j==0){
                    dp[i][j]=1;
                    
                }
                 else{
                     int left=0,right=0;
                     if(i>0){
                         left=dp[i-1][j];
                     }
                     if(j>0){
                         right=dp[i][j-1];
                     }
                dp[i][j]=left+right;
                     }
            }
        }
        
        return dp[n-1][m-1];
        
    }
}