class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>v;
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        int cur=0;
        while(v.size()>1){
             cur=(cur+k-1)%v.size();
            v.erase(v.begin()+cur);
        }
        cout<<v.size()<<v[0];
        return v[0];
        
        
        
    }
};