class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        int n=nums.length;
        
        List<List<Integer>>l2=new ArrayList<>();
        Arrays.sort(nums);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum=target-nums[i]-nums[j];
                int front=j+1;
                int back=n-1;
                while(front<back){
                    if(nums[front]+nums[back]<sum){
                        front++;
                    }
                    else if(nums[front]+nums[back]>sum){
                        back--;
                    }
                    else{
                        List<Integer>l1=new ArrayList<>();
                        l1.add(nums[i]);
                        l1.add(nums[j]);
                        l1.add(nums[front]);
                        l1.add(nums[back]);
                         l2.add(l1);
                        while(front<back && nums[front]==l1.get(2)) front++;
                        while(front<back && nums[back]==l1.get(3)) back--;
                        
                    }
                }
                while(j+1<n &&nums[j+1]==nums[j]) j++;
               
            }
            while(i+1<n && nums[i+1]==nums[i]) i++;
            
        }
        return l2;
    }
}