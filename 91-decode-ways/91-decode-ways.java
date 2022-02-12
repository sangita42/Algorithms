class Solution {
    public int numDecodings(String s) {
        int dp[] = new int[s.length()+1];
        
        return num(0,s,dp);
       
        
    }
    public int num(int ind,String s,int dp[]){
        
        if(ind==s.length()){
            return 1;
        }
        if(s.charAt(ind)=='0'){
            return 0;
        }
        if(ind ==s.length()-1){
            return 1;
        }
        if(s.charAt(ind)=='0'){
            return 0;
        }
        
        if(dp[ind]!=0){
            return dp[ind];
        }
            int r=num(ind+1,s,dp);
            int l=0;
            if(Integer.parseInt(s.substring(ind,ind+2))<=26){
                l= num(ind+2,s,dp);
            }
               
            dp[ind]=r+l;
            return dp[ind];
        
    }
}