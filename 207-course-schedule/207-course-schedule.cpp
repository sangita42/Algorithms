class Solution {
public:
    bool cycle(int node,vector<int>&vis,vector<int>&dfsvis,vector<int>adj[]){
        vis[node]=1;
        dfsvis[node]=1;
        for(auto it:adj[node]){
            if(vis[it]==0){
                if(cycle(it,vis,dfsvis,adj)){
                    return true;
                }
            }
            else if(dfsvis[it]==1){
                return true;
                
            }
        }
        dfsvis[node]=0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];
        
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        vector<int>vis(numCourses,0);
        vector<int>dfsvis(numCourses,0);
        for(int i=0;i<numCourses;i++){
            if(vis[i]==0){
                if(cycle(i,vis,dfsvis,adj)){
                    return false;
                }
            }
        }
        return true;
        
        
    }
};