class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int>left;
        vector<int>right;
        int n=heights.size();
        stack<int>st1;
        stack<int>st2;
        for(int i=0;i<n;i++){
            if(st1.empty()){
                left.push_back(-1);
            }
            else if(st1.size()>0&&heights[i]>heights[st1.top()]){
                left.push_back(st1.top());
            }
            else if(st1.size()>0&&heights[i]<=heights[st1.top()]){
                while(st1.size()>0&&heights[i]<=heights[st1.top()]){
                    st1.pop();
                }
                if(st1.empty()){
                    left.push_back(-1);
                }
                else{
                    left.push_back(st1.top());
                }
            }
            st1.push(i);
        }
        for(int i=n-1;i>=0;i--){
            if(st2.empty()){
                right.push_back(n);
            }
            else if(st2.size()>0&&heights[i]>heights[st2.top()]){
                right.push_back(st2.top());
            }
            else if(st2.size()>0&&heights[i]<=heights[st2.top()]){
                while(st2.size()>0&&heights[i]<=heights[st2.top()]){
                    st2.pop();
                }
                if(st2.empty()){
                    right.push_back(n);
                }
                else{
                    right.push_back(st2.top());
                }
            }
            st2.push(i);
        }
        reverse(right.begin(),right.end());
        int ans=0;
        for(int i=0;i<n;i++){
            int diff=(right[i]-left[i])-1;
            ans=max(ans, heights[i]*diff);
        }
        return ans;
        
    }
};