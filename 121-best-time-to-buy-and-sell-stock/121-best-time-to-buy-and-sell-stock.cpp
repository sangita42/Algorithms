class Solution {
public:
    //7,1,5,3,6,4
    // 
    int maxProfit(vector<int>& prices) {
        int minvalue=INT_MAX;
        int ans=0;
        for(int i=0;i<prices.size();i++){
            minvalue=min(minvalue,prices[i]);
            ans=max(prices[i]-minvalue,ans);
            
        }
        return ans;
    }
};