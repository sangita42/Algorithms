class Solution {
    public int characterReplacement(String s, int k) {
        int i=0,j=0;
        int n=s.length();
        
        HashMap<Character,Integer>mp=new HashMap<>();
        int ans=0;
        int res=0;
        
        while(j<n){
            char c=s.charAt(j);
            mp.put(c,mp.getOrDefault(c,0)+1);
            ans=Math.max(ans,mp.get(c));
            if((j-i+1)-ans>k){
                char cus=s.charAt(i);
                mp.put(cus,mp.get(cus)-1);
               
                i++;
            }
            res=Math.max(res,j-i+1);    
            j++;
            
        }
        return res;
        
        
    }
}