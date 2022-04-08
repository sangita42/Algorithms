class KthLargest {//4,3,2 ->5,4,2
    private PriorityQueue<Integer>pq;
    private static int k;
   
    
    

    public KthLargest(int k, int[] nums) {
        this.k=k;
         pq=new PriorityQueue<>();
         for(int num: nums)
            pq.add(num);
        
       
        
        
    }
    
    public int add(int val) {
        pq.add(val);
        while(pq.size()>k){
            pq.poll();
        }
        return pq.peek();
        
        
    }
}

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */