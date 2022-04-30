class Solution {
    public int orangesRotting(int[][] grid) {
        int n=grid.length;
        int m=grid[0].length;
        Queue<int[]>q=new LinkedList<>();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.offer(new int[]{i,j}); // q= (0,0)
                }
            }
        }
        int[] dx={-1,0,0,1};
        int[] dy={0,1,-1,0};
        int fresh=-1;
        while(!q.isEmpty()){
            int s=q.size();
            for(int j=0;j<s;j++){
            int[] temp=q.poll();
            int x=temp[0];//x=0
            int y=temp[1];//y=0
            
            for(int i=0;i<4;i++){
                int dirx=x+dx[i];//0,1
                int diry=y+dy[i];
                if(dirx<0||diry<0||dirx>=n||diry>=m||grid[dirx][diry]!=1){
                    continue;
                }
                
                    q.offer(new int[]{dirx,diry});
                    grid[dirx][diry]=2;
                
                
            }
                
            }
            fresh++;
            
            
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        if(fresh==-1){
            return 0;
        }
        return fresh;
        
        
    }
}