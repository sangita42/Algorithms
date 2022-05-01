class Solution {
public:
    void dfs(int node,vector<int>&vis,stack<int>&st,vector<int>adj[]){
        vis[node]=1;
        for(auto it:adj[node]){
            if(vis[it]==0){
                dfs(it,vis,st,adj);
            }
        }
        st.push(node);
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];
        
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        vector<int>indegree(numCourses,0);
        for(int i=0;i<numCourses;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        
        int c=0;
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            c++;
            for(auto it:adj[temp]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        if(c==numCourses) return true;
        return false;
        
    }
};