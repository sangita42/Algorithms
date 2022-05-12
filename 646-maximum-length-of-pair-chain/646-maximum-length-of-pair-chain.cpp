class Solution {
public:
    static bool comparator(vector<int>&v1,vector<int>&v2){
        if(v1[1]<v2[1]){
            return true;
        }
        if(v1[1]==v2[1]){
            return false;
        }
        return false;
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        
        sort(pairs.begin(),pairs.end(),comparator);// (1,2), (2,3),(3,4)//a,b
        int b=pairs[0][1];//2
        int c=1;
        
        for(int i=1;i<pairs.size();i++){
            if(b<pairs[i][0]){
                b=pairs[i][1];
                c++;
            }
            
        }
        return c;
        
    }
};