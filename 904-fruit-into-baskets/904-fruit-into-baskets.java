class Solution {
    public int totalFruit(int[] fruits) {
        // mp[[j]]++ 0-1,1-1 2-1
        int i=0,j=0;
        int n=fruits.length;
        int ans=0;
        HashMap<Integer,Integer>mp=new HashMap<>();
        while(j<n){
            
            mp.put(fruits[j],mp.getOrDefault(fruits[j],0)+1);
            if(mp.size()<=2){
                ans=Math.max(ans,j-i+1);
            }
            while(mp.size()>2){
                
                mp.put(fruits[i],mp.get(fruits[i])-1);
                if(mp.get(fruits[i])==0){
                    mp.remove(fruits[i]);
                }
                i++;
            }
            j++;
                
            }
            
        
        return ans;
        
    }
}