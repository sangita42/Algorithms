class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        st.push(num[0]);
        for(int i=1;i<num.length();i++){
            while(k>0 &&!st.empty()&& st.top()>num[i]){
                st.pop();
                
                k--;
            }
            st.push(num[i]);
            if(st.size()==1 && num[i]=='0'){
                st.pop();
                
            }
           
        }
        while(k>0&&!st.empty()){
            k--;
            st.pop();
        }
        string s="";
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        if(s.length()==0){
            return "0";
        }
        return s;
        
        
    }
};