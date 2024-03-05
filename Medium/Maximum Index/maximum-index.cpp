//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int a[], int n) {
        // code here
        vector<int> lesser(n), greater(n);
        lesser[0] = a[0];
        greater[n-1] = a[n-1];
        for(int i = 1; i < n; i++) {
            lesser[i] = min( lesser[i-1], a[i]);
            greater[n - i -1] = max( greater[n - i], a[n - i -1]);
        }
         
        int i = 0, j = 0, maxdiff = -1;
        while(i < n and j < n) {
            if(lesser[i] <= greater[j]){
                maxdiff = max(maxdiff,j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return maxdiff;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends