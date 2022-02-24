// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
  
	int distinctSubsequences(string s)
	{
	    // Your code goes here
	    int mod=1e9+7;
	   
	    int dp[s.length()+1];
	    dp[0]=1;
	    unordered_map<char,int>mp;
	    for(int i=1;i<=s.length();i++){
	        dp[i]=(2*dp[i-1])%mod;
	        if(mp.find(s[i-1])!=mp.end()){
	            int k=mp[s[i-1]];
	            dp[i]=(dp[i]%mod-dp[k-1]%mod)%mod;
	        }
	        
	        mp[s[i-1]]=i;
	    }
	    if(dp[s.length()]<0){
	        return dp[s.length()]+=mod;
	    }
	    return dp[s.length()];
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends