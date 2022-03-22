class Solution {
public:
    void balance(int open,int close,vector<string>&v,string op){
        if(open==0&&close==0){
            v.push_back(op);
            return;
        }
        if(open!=0){
            op+='(';
            balance(open-1,close,v,op);
            op.pop_back();
        }
        if(close>open){
            op+=')';
            balance(open,close-1,v,op);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        int open=n;
        int close=n;
        string op="";
        balance(open,close,v,op);
        return v;
        
    }
};