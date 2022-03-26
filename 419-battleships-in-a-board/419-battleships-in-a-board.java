class Solution {
    void bfs(int i,int j,char[][] board,int n,int m){
        Queue<int[]>q=new LinkedList();
        q.add(new int[]{i,j});
        while(q.size()>0){
            int[] cur=q.poll();
            if(cur[0]<0 || cur[0]>=n || cur[1]<0 || cur[1]>=m || board[cur[0]][cur[1]]=='.'){
                continue;
            }
            board[cur[0]][cur[1]]='.';
            q.add(new int[]{cur[0]+1,j});
            q.add(new int[]{i,cur[1]+1});
        }
    }
    public int countBattleships(char[][] board) {
        int n=board.length;
        int m=board[0].length;
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='X'){
                    bfs(i,j,board,n,m);
                    ans++;
                }
            }
        }
        return ans;
        
    }
}