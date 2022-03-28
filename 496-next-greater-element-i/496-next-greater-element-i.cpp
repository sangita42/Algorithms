class Solution {
public:
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>v;
        stack<int>st;
        int n2=nums2.size();
        for(int i=n2-1;i>=0;i--){
            if(st.empty()){
                v.insert({nums2[i],-1});
                //v[nums2[i]].push_back(-1);
            }
            else if(st.size()>0&&st.top()>nums2[i]){
                v.insert({nums2[i],st.top()});
                //v[nums2[i]].push_back(st.top());
                
                
            }
            else if(st.size()>0 &&st.top()<=nums2[i]){
                while(st.size()>0&& st.top()<=nums2[i]){
                    st.pop();
                    
                }
                if(st.empty()){
                    v.insert({nums2[i],-1});
                    //v[nums2[i]].push_back(-1);
                }
                else{
                    v.insert({nums2[i],st.top()});
                    //v[nums2[i]].push_back(st.top());
                }
            }
                
            
            st.push(nums2[i]);
        }
        vector<int>res;
        for(int i=0;i<nums1.size();i++){
            int s=v[nums1[i]];
            res.push_back(s);
        }
        return res;
        
    }
};