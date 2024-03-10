//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	    map<char,int>mp;
	    string ans="";
	    int n = str.size();
	    for(auto it : str) {
	        mp[it]++;
	        if(mp[it] == 1) ans+=it;
	    }
	   // for ( auto it:mp){
	   //     cout<<it.first <<" "<< it.second<<"\n";
	   // }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends