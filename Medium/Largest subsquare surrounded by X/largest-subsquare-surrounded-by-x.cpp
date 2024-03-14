//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int largestSubsquare(int n, vector<vector<char>> a) {
        // code here
        vector<vector<int>>tr1(n,vector<int>(n,0));
        vector<vector<int>>tr2(n,vector<int>(n,0));
        for(int i = 0; i < n; i++) {
            int row = 0, col = 0;
            for(int j = 0; j < n; j++) {
                if(a[i][j] == 'X') {
                    row ++;
                }
                else row = 0;
                if(a[j][i] == 'X') {
                    col ++;
                }
                else col = 0;
                
                tr1[i][j] = row;
                tr2[j][i] = col; 
            }
            
        }
        
        /*for ( int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout<<tr1[i][j] <<" ";
            }
            cout<<"\n";
        }
            cout<<"\n";
        
        for ( int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout<<tr2[i][j] <<" ";
            }
            cout<<"\n";
        }*/
        
        int ans = 0;
        
        for(int i = n-1; i >= 0; i--) {
            for(int j = n-1; j >= 0; j--) {
                int s = min(tr1[i][j] , tr2[i][j]);
                
                while ( s > ans){
                    if(tr1[i-s+1][j] >= s and tr2[i][j-s+1] >= s)
                        ans = s;
                    else s--;
                }
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<char>> a(n, vector<char>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cin >> a[i][j];
        }
        Solution ob;
        cout << ob.largestSubsquare(n, a) << "\n";
    }
}
// } Driver Code Ends