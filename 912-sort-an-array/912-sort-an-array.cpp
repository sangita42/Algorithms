class Solution {
public:
    void merge(vector<int>& nums,int start,int mid,int end){// 0,0,1
        vector<int>ans;
        int i=start;//0
        int j=mid+1;//1
        while(i<=mid&&j<=end){
            if(nums[i]<=nums[j]){
                ans.push_back(nums[i]);
                i++;
            }
            else{
                ans.push_back(nums[j++]);
            }
        }
        while(i<=mid){
            ans.push_back(nums[i++]);
            
        }
        while(j<=end){
            ans.push_back(nums[j++]);
            
        }
        int k=start;
        for(int i=0;i<ans.size();i++){
            nums[k++]=ans[i];
        }
        
    }
    void mergesort(vector<int>& nums,int start,int end){
        if(start>=end){ return ;}
        int mid=(start+end)/2;//1
        mergesort(nums,start,mid);//5,2 (0,1)
        mergesort(nums,mid+1,end);//3,1
        merge(nums,start,mid,end);
        
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0,nums.size()-1);
        return nums;
        
    }
};