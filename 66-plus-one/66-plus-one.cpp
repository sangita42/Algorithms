class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int n=digits.size();
        int carry=0;
        int sum=0,res;
        
        for(int i=n-1;i>=0;i--){
            if (i==digits.size()-1) {
                sum = (1+digits[i])%10;
                carry = (1+digits[i])/10;
                ans.push_back(sum);
            }
            else{
                sum = (carry+digits[i])%10;
                carry = (carry+digits[i])/10;
                ans.push_back(sum);
            }
           
            
        }
        if(carry>0){
        ans.push_back(carry);
            }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};