class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()>goal.length()){
            return false;
        }
        string ans=s+s;
      if(ans.find(goal) != std::string::npos){
          return true;
      }
        return false;
        
    }
};