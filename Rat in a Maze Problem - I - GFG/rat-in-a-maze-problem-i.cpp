// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    void solve(int i, int j, vector < vector < int >> & a, int n, vector < string > & ans, string move,
    vector < vector < int >> & vis, int di[], int dj[]) {
    if (i == n - 1 && j == n - 1) {
      ans.push_back(move);
      return;
    }
    string dir = "RLDU";
    for (int ind = 0; ind < 4; ind++) {
      int nexti = i + di[ind];
      int nextj = j + dj[ind];
      if (nexti >= 0 && nextj >= 0 && nexti < n && nextj < n && !vis[nexti][nextj] && a[nexti][nextj] == 1) {
        vis[i][j] = 1;
        solve(nexti, nextj, a, n, ans, move + dir[ind], vis, di, dj);
        vis[i][j] = 0;
      }
    }

  }
    void ratinamaze(int src1,int src2,string move,vector<vector<int>> &m,vector<string>&ans,vector<vector<int>>&vis,
    int n,int dx[],int dy[]){
        
        //if(src1==n-1&&src2==n-1){
            //ans.push_back(move);
            //return;
        //}
         if (src1 == n - 1 && src2 == n - 1) {
      ans.push_back(move);
      return;
    }
       
        string s="RLDU";
        for(int i=0;i<4;i++){
            int ix=src1+dx[i];//0
            int iy=src2+dy[i];//1
            if(m[ix][iy]==1 &&!vis[ix][iy]&&ix>=0&&iy>=0&&ix<n&&iy<n){
                vis[src1][src2]=1;
                ratinamaze(ix,iy,move+s[i],m,ans,vis,n,dx,dy);
                vis[src1][src2]=0;
                
                
            }
            
        }
        
       
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        vector<vector<int>>vis(n,vector<int>(n,0));
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};
        
        //if(m[0][0]==1)ratinamaze(0,0,"",m,ans,vis,n,dx,dy);
        if(m[0][0]==1)solve(0, 0, m, n, ans, "", vis, dx, dy);

        return ans;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends