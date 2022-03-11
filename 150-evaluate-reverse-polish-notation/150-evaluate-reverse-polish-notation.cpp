class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++){
            
             if(tokens[i]=="+"){
                int top1=st.top();
                st.pop();
                int top2=st.top();
                st.pop();
                int res= top2+top1;
                st.push(res);
            }
            else if(tokens[i]=="-"){
                int top1=st.top();
                st.pop();
                int top2=st.top();
                st.pop();
                int res= top2-top1;
                st.push(res);
            }
            else if(tokens[i]=="*"){
                int top1=st.top();
                st.pop();
                int top2=st.top();
                st.pop();
                int res= top2*top1;
                st.push(res);
            }
            else if(tokens[i]=="/"){
                int top1=st.top();
                st.pop();
                int top2=st.top();
                st.pop();
                int res= top2/top1;
                st.push(res);
            }
            else{
              
                st.push(stoi(tokens[i]));
            
            }
        }
        return st.top();
        
    }
};