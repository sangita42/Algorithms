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
        //vector<int> v(n+1,-1);
        int v[n+1];
        v[0]=1;
        v[1]=1;
        for(int i=2;i<=n;i++){
            v[i]=v[i-1]+v[i-2];
        }
        return v[n];
        
    }
};