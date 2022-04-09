class Solution {
    public boolean substring(String s1,String s2){
        if (s1.length() < s2.length()) {
       return false;
   }
        
        for(int i=0;i<=s1.length()-s2.length();i++){
             int f=1;
            for(int j=0;j<s2.length();j++){
                
                if(s1.charAt(i+j)!=s2.charAt(j)){
                    f=0;
                    break;
                }
            }
            if(f==1){
            return true;
        }
        }
        
        return false;
    }
    public List<String> stringMatching(String[] words) {
        
        HashSet<String> s= new HashSet<>();
       for(int i=0;i<words.length;i++){
           for(int j=i+1;j<words.length;j++){
               if(substring(words[i],words[j])){
                   s.add(words[j]);
               }
               if(substring(words[j],words[i])){
                   s.add(words[i]);
               }
           }
       }
        List<String> l1=new ArrayList<>(s);
        return l1;
        
        
    }
}