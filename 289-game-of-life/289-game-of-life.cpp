class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                int livecount=0;
                
                if(i+1<n && abs(board[i+1][j])==1){
                    livecount++;
                    
                }
                if(j+1<m&&abs(board[i][j+1])==1 ){
                    livecount++;
                    
                }
                if(i-1>=0 && abs(board[i-1][j])==1){
                    livecount++;
                    
                }
                if(j-1>=0 &&abs(board[i][j-1])==1){
                    livecount++;
                    
                }
                if(i-1>=0&&j-1>=0 && abs(board[i-1][j-1])==1){
                    livecount++;
                    
                }
                if(i+1<n&&j+1<m &&abs(board[i+1][j+1])==1){
                    livecount++;
                    
                }
                if(i-1>=0&&j+1<m &&abs(board[i-1][j+1])==1){
                    livecount++;
                }
                if(i+1<n&&j-1>=0&&abs(board[i+1][j-1])==1){
                    livecount++;
                }
                
                if(board[i][j]==0 && livecount==3){
                    board[i][j]=2;
                }
                if(board[i][j]==1&&(livecount<2||livecount>3)){
                    board[i][j]=-1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]>0){
                    board[i][j]=1;
                }
                else{
                    board[i][j]=0;
                }
            }
        }
        
    }
};