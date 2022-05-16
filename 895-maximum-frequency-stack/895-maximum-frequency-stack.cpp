class FreqStack {
public:
    unordered_map<int,int>freq;
    unordered_map<int,stack<int>>mp;
    int maxi=0;
    FreqStack() {
        
    }
    
    void push(int val) {
       freq[val]++;
        if(freq[val]>maxi){
            maxi=freq[val];
        }
        mp[freq[val]].push(val);
        
        
    }
    
    int pop() {
        int x=mp[maxi].top();
        mp[maxi].pop();
        freq[x]--;
        if(mp[maxi].size()==0){
            maxi--;
        }
        return x;
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */