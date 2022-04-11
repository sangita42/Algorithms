class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {   
         int color=image[sr][sc];
        if(image[sr][sc]==newColor) return image;
        int n=image.size();
        int m=image[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>dir={{-1,0},{0,-1},{1,0},{0,1}};
        q.push({sr,sc});
       
        while(!q.empty()){
            auto pos=q.front();
            q.pop();
            int x=pos.first;
            int y=pos.second;
            image[x][y]=newColor;
            for(auto it:dir){
                int a=x+it[0];
                int b=y+it[1];
                if(a>=0&&b>=0&&a<n&&b<m&&image[a][b]==color){
                    q.push({a,b});
                }
            }
        }
        return image;
        
    }
};