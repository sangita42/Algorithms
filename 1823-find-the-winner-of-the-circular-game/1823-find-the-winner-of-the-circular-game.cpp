class Solution {
public:
    int func(vector<int>&v,int k,int cur){
        if(v.size()==1){
            return v[0];
        }
         cur=(cur+k-1)%v.size();
            v.erase(v.begin()+cur);
        return func(v,k,cur);
        
    }
    int findTheWinner(int n, int k) {
        vector<int>v;
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        return func(v,k,0);
       
        
        
        
    }
};