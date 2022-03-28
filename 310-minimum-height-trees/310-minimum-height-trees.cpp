class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
       vector<int>indegree(n,0);
        vector<int> adj[n];
        for(vector<int> vec: edges){
            adj[vec[0]].push_back(vec[1]);
            adj[vec[1]].push_back(vec[0]);
            indegree[vec[0]]++;
            indegree[vec[1]]++;
        }
        
        queue<int>q;
        vector <int>res;
        for(int i=0;i<n;i++){
            if(indegree[i]==1){
                q.push(i);
               indegree[i]--;
            }
        }
        
        while(!q.empty()){
            int sz = q.size();
           res.clear();
            for(int i =0;i<sz;i++){
                int curr = q.front();q.pop();
                res.push_back(curr);
                for(int ele : adj[curr]){
                    indegree[ele]--;
                    if(indegree[ele]==1){
                        q.push(ele);
                        indegree[ele]--;
                    }
                }
            }
        } 
        if(n==1) return {0};
        return res;
        
    }
};