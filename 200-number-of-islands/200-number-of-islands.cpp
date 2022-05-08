class Solution {
public:
    void bfs(int i,int j,vector<vector<char>>& grid,int dx[],int dy[],int n,int m){
        queue<pair<int,int>>q;
        q.push({i,j});
        grid[i][j]='0';
        while(!q.empty()){
            
           
                int ix=q.front().first;
                int iy=q.front().second;
            q.pop();
                
                for(int i=0;i<4;i++){
                    int x=ix+dx[i];
                    int y=iy+dy[i];
                   if(x>=0&&y>=0&&x<n&&y<m&&grid[x][y]=='1'){
                    
                    grid[x][y]='0';
                    q.push({x,y});
                   }
                    
                }
            
            
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    bfs(i,j,grid,dx,dy,n,m);
                    
                    c++;
                }
            }
        }
        return c;
    }
};