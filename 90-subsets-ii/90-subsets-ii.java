class Solution {
    void subset(int ind,int[] nums,List<List<Integer>> ans,List<Integer> res,int n){
        ans.add(new ArrayList<>(res));
        for(int i=ind;i<n;i++){
            if(i!=ind&&nums[i]==nums[i-1]){
                continue;
            }
           res.add(nums[i]);
            subset(i+1,nums,ans,res,n);
            res.remove(res.size()-1);
            
        }
        
    }
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        List<List<Integer>> ans=new ArrayList<>();
        List<Integer> res=new ArrayList<>();
        Arrays.sort(nums);
        subset(0,nums,ans,res,nums.length);
        return ans;
        
    }
}