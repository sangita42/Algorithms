class Solution {
public:
    int countGoodSubstrings(string s) {
        int start=0, end=0;
        int len=s.length();
        unordered_map<char,int>mp;
        int c=0;
        while(end<len){
            mp[s[end]]++; //  y=1,z=2,
            
                
            
            if(end-start+1==3){
                if(mp.size()==3){ //
                    c++;
                }
                mp[s[start]]--; // y-1 z= 1
                if(mp[s[start]]==0){
                    mp.erase(s[start]);
                }
                start++;  // 1
            }
            end++;//3
            
        }
        return c;
        
    }
};