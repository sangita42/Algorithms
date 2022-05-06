class Solution {
public:
    //2 1 1
    //1 1 0
    //0 1 1
    //0 0 0
    //2 1 1
    // (0,0),(4,0),(0,1),(1,0)
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        int c=-1;
        while(!q.empty()){// =(0,0)
            
           
            int size=q.size();//1
            
            while(size--){//1
             int x=q.front().first;//x=0
            int y=q.front().second;//y=0
                q.pop();
            for(int i=0;i<4;i++){
                int ix=x+dx[i];//ix=0
                int iy=y+dy[i];//iy=2
                if(ix<0||iy<0||ix>=n||iy>=m||grid[ix][iy]!=1){
                    continue;
                }
               
                q.push({ix,iy});// (0,2),(1,2)
                 grid[ix][iy]=2;
               
            }
                
            }
            c++;//c=4
            
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        if(c==-1){
            return 0;
        }
        return c;
        
        
    }
};