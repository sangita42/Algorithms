class Solution {
public:
    int nextGreaterElement(int n) {
        
        string s = to_string(n);
        int i = s.size() - 1;
		// ascending
        for(; i>=0; i--) {
            if(s[i+1] > s[i]) break;
        }
        if(i < 0) return -1;
        int tmp = i;
        int minn = INT_MAX;
        int idx = -1;
		// swap with just greater number
        for(int j=s.size()-1; j>=i; j--) {
            if(s[j] > s[i]) {
                swap(s[i], s[j]);
                break;
            }
        }
		// reverse
        reverse(s.begin()+i+1, s.end());
        long res = stol(s);
        return res > INT_MAX ? -1 : res;
    }
    
};