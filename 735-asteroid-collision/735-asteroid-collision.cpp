class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        // st= 5 10 
        // 10 2 
        //5 10 -5
        //-5 -6 10 -8 2 18 -1 5
        //st = -5 -6 10  
        stack<int>st;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i]>0){
                st.push(asteroids[i]);
                continue;
            }
            while(!st.empty()&&st.top()>0&&st.top()<abs(asteroids[i])){
                st.pop();
            }
            if(!st.empty()&&st.top()==abs(asteroids[i])){
                st.pop();
            }
            else if(st.empty()||st.top()<0){
                st.push(asteroids[i]);
            }
                
            }
                            
            
        
        vector<int>v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};