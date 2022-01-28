class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        int p;
        while(n!=1){
            if(s.find(n)!=s.end()){
                return false;
            }
            else{
                s.insert(n);
            }
            int mul=0;
            while(n>0){
            p=n%10;
            n=n/10;
            mul=mul+p*p;
                
            }
            n=mul;
            
        }
        return true;
    }
};