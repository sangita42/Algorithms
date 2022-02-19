class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' ')continue;
            string temp="";
            while(i<s.length() && s[i]!=' '){
                temp+=s[i];
                i++;
            }
            st.push(temp);
            
            
            
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            if(!st.empty()){
                ans+=" ";
            }
        }
        
                return ans;
        
        
    }
};