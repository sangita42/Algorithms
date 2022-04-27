class Solution {
public:
    //k=6 ans= 13
    // low=1 high=15
    //mid = 8 low= 9 high = 15 mid= 12 count= 5 low = 13 high = 15 mid=14
    //count = 8>=6 ans = 14 high= 13 low=13 mid = 13 mid=ans
    
    // 1 5 9
    //10 11 12
    //12 13 15
    int count(int mid,vector<vector<int>>& matrix,int n,int m){
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]<=mid){
                    c++;
                }
                else{
                    break;
                }
            }
        }
        return c;
        
    }
    
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int m=matrix[0].size();
        int low=matrix[0][0];
        int high=matrix[n-1][m-1];
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(count(mid,matrix,n,m)<k){
                low=mid+1;
            }
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
        
    }
};