class Solution {
public:
    int minDeletions(string s) {
        vector<int> v(26,0);
        for(auto i:s) v[i-'a']++;
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=v.size()-1;i>=1&&v[i];i--){
            int j=i-1;
            while(j>=0 && v[i]==v[j]){
                v[j--]--;
                ans++;
            }
        }
        return ans;
        
    }
};