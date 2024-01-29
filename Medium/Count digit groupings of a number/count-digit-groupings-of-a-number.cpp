//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int func(int i,int n, string &str, vector<vector<int>>&dp, int sum){
	    if(i==n)return 1;
	    if(dp[i][sum]!=-1)return dp[i][sum];
	    int x=0,c=0;
	    
	    for(int j=i;j<n;j++){
	        x+=str[j]-'0';
	       // cout<<x<<" "<<sum<< endl;
	        if(sum<=x){
	            c+=func(j+1,n,str,dp,x);
	        }
	    }
	    return dp[i][sum]=c;
	}
	
	int TotalCount(string str){
	    // Code here
	    int n=str.size();
	    vector<vector<int>>dp(n*9,vector<int>(n*9,-1));
	    
	    return func(0,n,str,dp,0);
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution ob;
		int ans = ob.TotalCount(str);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends