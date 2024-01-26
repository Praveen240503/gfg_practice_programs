//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution{
public:
    vector<long long> factorial(vector<long long> a, int n) {
        long long maxi=INT_MIN;  int m=1e9+7;
        for(int i=0;i<n;i++) maxi=max(maxi,a[i]);
        vector<long long>v(maxi+1,1),ans(n);
        
        for(long long  i=2;i<=maxi;i++){
            v[i]=(i%m*v[i-1]%m)%m;
        }
        
        for(long long i=0;i<n;i++){
            ans[i]=v[a[i]];
        }
        return ans;       
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<long long> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<long long> res = ob.factorial(a, n);
        for (i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends