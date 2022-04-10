class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int>v;
        int num=n;
        while(num>0){
            v.push_back(num%10);
            num=num/10;
        }
        reverse(v.begin(),v.end());
        int i,j;
        for(i=v.size()-2;i>=0;i--){
            
            if(v[i]<v[i+1]){
                break;
            }
        }
        if(i<0){
            return -1;
        }
        else{
            for(j=v.size()-1;j>i;j--){
                if(v[j]>v[i]){
                    break;
                }
            }
            swap(v[i],v[j]);
            reverse(v.begin()+i+1,v.end());
        }
        long long int s=0;
        for(int i=0;i<v.size();i++){
            s=s*10+v[i];
            
        }
        if(s>INT_MAX){
            return -1;
        }
        return s;
        
    }
};