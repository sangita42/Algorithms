class Solution {
public:
    bool capacityPosible(int mid,int n,vector<int>& weights, int days){
        int count=1,pages=0;
        for(int i=0;i<n;i++){
            if(weights[i]>mid) return false;
            if(pages+weights[i]>mid){
                count+=1;
                pages=weights[i];
            }
            else{
                pages+=weights[i];
            }
        }
        if(count>days){
            return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        
        int n=weights.size();
        
        int low=*max_element(weights.begin(),weights.end());
        int sum=0;
        for(auto it:weights){
            sum+=it;
        }
        int high=sum;
        int res=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(capacityPosible(mid,n,weights,days)){
                res=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }
};