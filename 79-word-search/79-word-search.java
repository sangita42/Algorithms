class Solution {
    boolean dfs(int ind,int i,int j,int n,int m,char[][] board, String word){
        if(ind==word.length()){
            return true;
        }
        if(i<0||i>=n||j<0||j>=m||board[i][j]!=word.charAt(ind)){
            return false;
        }
        char temp=board[i][j];
        board[i][j]=' ';
        boolean f=dfs(ind+1,i+1,j,n,m,board,word)
        || dfs(ind+1,i,j+1,n,m,board,word)
        || dfs(ind+1,i,j-1,n,m,board,word)
        || dfs(ind+1,i-1,j,n,m,board,word); 
        board[i][j]=temp;
        return f;
        
    }
    public boolean exist(char[][] board, String word) {
        int n=board.length;
        int m=board[0].length;
        //System.out.println(word[0]);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(word.charAt(0)==board[i][j]){
                    if(dfs(0,i,j,n,m,board,word)){
                        return true;
                    }
                }
            }
        }
        return false;
        
    }
}