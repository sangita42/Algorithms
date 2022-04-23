class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        HashMap<Character,Integer>mp=new HashMap<>();
        for(int i=0;i<jewels.length();i++){
            char c= jewels.charAt(i);
            mp.put(c,mp.getOrDefault(c,0)+1);
        }
        int count=0;
        for(int i=0;i<stones.length();i++){
            char c= stones.charAt(i);
            if(mp.containsKey(c)){
                count++;
            }
        }
        return count;
        
    }
}