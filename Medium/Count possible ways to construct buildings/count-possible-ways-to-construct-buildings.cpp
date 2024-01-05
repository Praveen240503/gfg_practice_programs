//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	const int modu=1e9+7;
	int TotalWays(int N)
	{
	    // Code here
	    unsigned long long n=1;
	    unsigned long long m=1;
	    
	    for(int i=2;i<=N;i++){
	        unsigned long long o=m;
	        unsigned long long p=(n+m);
	        
	        n=o%modu;
	        m=p%modu;
	    }
	    unsigned long long t=(n+m)%modu;
	    
	    return (t*t)%modu;
	}
	
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends