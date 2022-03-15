class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> v;
        string s[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        if(digits.length()==0){
            return v;
        }
        v.push_back("");
        for(int i=0;i<digits.length();i++){
            vector<string>temp;
            string st=s[digits[i]-'0'];//abc
            for(int j=0;j<st.length();j++){
                for(int k=0;k<v.size();k++){
                temp.push_back(v[k]+st[j]);
                    }
                
            }
            v.swap(temp);
        }
        
        return v;
    }
};