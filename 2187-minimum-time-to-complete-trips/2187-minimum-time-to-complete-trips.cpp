class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long l = 1, r = 1e14, m;
        int ans=0;
        while (l <= r) {
            m = l + (r - l) / 2;
            if (isEnough(m, time, totalTrips)) {
                
                r = m-1;
            }
            else {
                l = m + 1;
            }
        }
        
        return l;
    }
    
    bool isEnough(long long curT, vector<int> &time, int totalTrips) {
        long long tripSum = 0;
        for (int i=0;i<time.size();i++) {
            tripSum += curT / time[i];
        }
        
        return tripSum >= totalTrips;
    }
};