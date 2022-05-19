class Solution {
public:
    bool possible(vector<int>& piles,int mid, int h){
        int c=0;
        for(int i=0;i<piles.size();i++){
           c += (piles[i] + mid - 1)/mid;
            
            
        }
        return (c<=h);
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1, high=*max_element(piles.begin(),piles.end());
        cout<<high;
        
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(piles,mid,h)){
               
                high=mid-1;
                
            }
            else{
            low=mid+1;
        }
        }
        return low;
        
    }
};