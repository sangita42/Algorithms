class Solution {
    
    public static void dfs(int i,int j,char[][] board,int n,int m){
        if(i<0||j<0||i>=n||j>=m||board[i][j]!='O') return;
        board[i][j]='#';
        dfs(i+1,j,board,n,m);//dfs(4,1)
         dfs(i-1,j,board,n,m);//dfs(2,1)
         dfs(i,j+1,board,n,m);//dfs(3,2)
         dfs(i,j-1,board,n,m);//dfs(3,0)
        
        
    }
    public void solve(char[][] board) {
        int n=board.length;
        int m=board[0].length;
        for(int i=0;i<n;i++){
            if(board[i][0]=='O'){
                dfs(i,0,board,n,m);
            }
            if(board[i][m-1]=='O'){
                dfs(i,m-1,board,n,m);
            }
                
        }
        for(int i=0;i<m;i++){
            if(board[0][i]=='O'){
                dfs(0,i,board,n,m);
            }
            if(board[n-1][i]=='O'){
                dfs(n-1,i,board,n,m);// dfs(3,1)
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