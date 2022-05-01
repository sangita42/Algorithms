class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>>pq;
        int n=points.size();
        vector<vector<int>>ans;
        vector<int>res;
        int m=points[0].size();
        for(int i=0;i<n;i++){
            pq.push({points[i][0]*points[i][0] +points[i][1]*points[i][1],{points[i][0],points[i][1]}});
             while(pq.size()>k){
            pq.pop();
            
        }
        }
       
        while(!pq.empty()){
            pair<int,int>temp=pq.top().second;
            ans.push_back({temp.first,temp.second});
            pq.pop();
        }
        return ans;
        
    }
};