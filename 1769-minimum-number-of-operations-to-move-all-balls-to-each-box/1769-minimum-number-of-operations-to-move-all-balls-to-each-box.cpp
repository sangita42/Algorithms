class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>v;
        for(int i=0;i<boxes.length();i++){
            int c=0,dis=0;
           for(int j=0;j<boxes.length();j++){
               if(boxes[j]=='1'){
                   dis=abs(i-j);
                   c+=dis;
               }
           }
            v.push_back(c);
            
        }
        return v;
        
    }
};