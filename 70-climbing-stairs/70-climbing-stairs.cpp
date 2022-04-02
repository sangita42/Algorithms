class Solution {
public:
    int climb(int n, vector<int>& v){
        if(v[n]!=-1){
            return v[n];
        }
        if(n==0){
            return 1;
        }
        if(n==1){
            return 1;
        }
        return v[n]= climb(n-1,v)+climb(n-2,v);
    }
    int climbStairs(int n) {
        vector<int> v(n+1,-1);
        return climb(n,v);
        
    }
};