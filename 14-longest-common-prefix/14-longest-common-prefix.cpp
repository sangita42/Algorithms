class Solution {
public:
    string lg(string s1,string s2){
        int i=0,j=0;
        int n1=s1.length();
        int n2=s2.length();
        string s="";
        while(i<n1&&j<n2){
            if(s1[i]!=s2[j]){
                break;
            }
            s+=s1[i];
            i++;
            j++;
        }
        return s;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        for(int i=1;i<strs.size();i++){
            prefix=lg(prefix,strs[i]);
        }
        return prefix;
        
    }
};