class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n=s.length();
        int i=0,j=0;
        int cost=0;
        int ans=0;
        
        while(j<n){
            
            cost+=abs(s[j]-t[j]); // cost =4  cost = 4
            if(cost>maxCost){ // 4> 3
                while(cost>maxCost){
                    cost-=abs(s[i]-t[i]); //cost = 4-2=2
                    i++; // i=1
                }
                
            }
            ans=max(ans,j-i+1); // ans=1
            j++; // j=2
        }
        return ans;
        
        
    }
};