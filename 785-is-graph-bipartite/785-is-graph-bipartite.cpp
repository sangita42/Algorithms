class Solution {
public:
    bool dfs(vector<vector<int>>& graph,int i,vector<int>&vis){
        queue<int>q;
        q.push(i);
        vis[i]=1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it:graph[node]){
                if(vis[it]==-1){
                    vis[it]=1-vis[node];
                    q.push(it);
                    
                }
                else if(vis[it]==vis[node]){
                    return false;
                    
                    
                    
                }
                
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n=graph.size();
        vector<int> vis(n,-1);
        for(int i=0;i<n;i++){
            if(vis[i]==-1){
                
                 if(!dfs(graph,i,vis)){
            return false;
            }
          
        } 
        }
        return true;
        
       
        
    }
};