//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int dp[101][101][101];
    int moves[3] = {0,-1,1};
    int dfs(vector<vector<int>>& grid, int i, int c1, int c2, int m, int n){
        if(i==m)return 0;
        if(c1<0 || c2<0 || c1>=n || c2>=n) return INT_MIN;
        int ans = 0;
        if(dp[i][c1][c2]!=-1)return dp[i][c1][c2];
        for(int k=0;k<3;k++){
            for(int r=0;r<3;r++){
                ans = max(ans, dfs(grid, i+1, c1 + moves[k], c2 + moves[r] , m, n));
            }
        }
        if(c1==c2){
            ans+=grid[i][c1];
        }
        else{
            ans+=(grid[i][c1]+grid[i][c2]);
        }
        return dp[i][c1][c2] = ans;
    }
    int solve(int n, int m, vector<vector<int>>& grid) {
        // code here
        memset(dp,-1,sizeof(dp));
        return dfs(grid,0,0,m-1,n,m);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid;
        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j < m; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.solve(n, m, grid) << "\n";
    }
    return 0;
}
// } Driver Code Ends