class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //((1,3),(2,6),(8,10),(15,18))
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>v;
        int start=intervals[0][0];
        int end=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=end){
                end=max(end,intervals[i][1]);
                
                
            }
            else{
                v.push_back({start,end});
                start=intervals[i][0];
                end= intervals[i][1];   
                
            }
        }
        v.push_back({start,end});
        return v;
        
        
    }
};