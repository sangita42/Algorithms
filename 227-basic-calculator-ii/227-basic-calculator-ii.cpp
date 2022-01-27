class Solution {
public:
    int calculate(string s) {
         
        stack<int> myStack;
    char sign = '+';
    
        long long int tmp = 0,res=0;
    for (unsigned int i = 0; i < s.length(); i++) {
        if (isdigit(s[i]))
            tmp = 10*tmp + s[i]-'0';
        if (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'|| i == s.length()-1) {
            if (sign == '-')
                myStack.push(-tmp);
            else if (sign == '+')
                myStack.push(tmp);
            else if (sign == '*' ) {
                
                
                    int num = myStack.top()*tmp;
                 myStack.pop();
                myStack.push(num);
            }
                
                else if(sign == '/' ){
                    int num = myStack.top()/tmp;
                myStack.pop();
                myStack.push(num);
                
            } 
            sign = s[i];
            tmp = 0;
        }
    }
    while(!myStack.empty()) {
        res += myStack.top();
        myStack.pop();
    }
    return res;
    }
};