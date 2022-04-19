class Solution {
public:
    string reverseWords(string s) {
         stack<string> st;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                continue;
            }
            string ans="";
            while(i<s.length()&&s[i]!=' '){
                ans+=s[i];
                i++;
            }
            st.push(ans);
            
        }
        string res="";
        
        while(!st.empty()){
            res+=st.top();
            st.pop();
            if(!st.empty()){
                res+=" ";
            }
            
            
        }
        return res;
        
    }
};