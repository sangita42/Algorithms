class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        stack<char> st;
        char x;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(s[i]==')'){
                    if(st.empty()){
                        return false;
                    }
                    x=st.top();
                    if(x!='('){
                        return false;
                    }
                    else{
                        st.pop();
                    }
                }
                if(s[i]=='}'){
                     if(st.empty()){
                        return false;
                    }
                    x=st.top();
                    if(x!='{'){
                        return false;
                    }
                    else{
                        st.pop();
                    }
                }
                if(s[i]==']'){
                     if(st.empty()){
                        return false;
                    }
                    x=st.top();
                    if(x!='['){
                        return false;
                    }
                    else{
                        st.pop();
                    }
                }
            }
           
        }
         if(!st.empty()){
                return false;
                
            }
    
        return true;
        
        
        
    }
};