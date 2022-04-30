class Solution {
    public void solve(char[][] board) {
        int n=board.length;
        int m=board[0].length;
        Queue<int[]>q=new LinkedList<>();
        for(int i=0;i<n;i++){
            if(board[i][0]=='O'){
                board[i][0]='#';
                q.offer(new int[]{i,0});
            }
            if(board[i][m-1]=='O'){
                board[i][m-1]='#';
                q.offer(new int[]{i,m-1});
                
            }
                
        }
        for(int i=0;i<m;i++){
            if(board[0][i]=='O'){
                board[0][i]='#';
                q.offer(new int[]{0,i});
            }
            if(board[n-1][i]=='O'){
                board[n-1][i]='#';
                q.offer(new int[]{n-1,i});
            }
        }
         
        int dx[]={-1,0,0,1};
        int dy[]={0,1,-1,0};
        while(!q.isEmpty()){
            int temp[] = q.poll();
            int x=temp[0];
            int y=temp[1];
            board[x][y]='#';
            
            for(int i=0;i<4;i++){
                int dirx=x+dx[i];
                int diry=y+dy[i];
                if(dirx<0||diry<0||dirx>=n||diry>=m||board[dirx][diry]!='O'){
                    continue;
                }
                q.offer(new int[]{dirx,diry});
                
                
            }
        }
           
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                
            }
        }
            
            
            
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='#'){
                    board[i][j]='O';
                }
                
            }
        }
        
    }
}