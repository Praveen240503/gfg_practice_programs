//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool dfs(int l, int p, int i, int j, int n, int m, vector<vector<char>>&grid, vector<vector<int>>&vis, int k, string str) {
	    if(k==str.size())return true;
	    if(i < 0 || j < 0 || i >= n || j >= m || vis[i][j] == 1 || grid[i][j] != str[k]) {
	        return false;
	    }
	    vis[i][j]=1;
	    bool a = dfs(l, p, i+l, j+p, n, m, grid, vis, k+1, str);
	    vis[i][j]=0;
	    return a;
	    
    }
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	    int n = grid.size(), m = grid[0].size(), k = word.size();
	    vector<vector<int>>tr;
	    for(int i = 0; i < n; i++) {
	        for(int j = 0; j < m; j++) {
	            vector<vector<int>>vis(n,vector<int>(m,0));
	            if(grid[i][j] == word[0]){
	                int c = 0;
	                for(int l = -1; l <= 1; l++){
	                    for(int p = -1; p <= 1; p++){
	                        if(l==0 and p==0 )continue;
	                        if( dfs (l , p, i, j, n, m, grid, vis, 0, word)){
	                            tr.push_back({i,j});
	                            c=1;
	                            break;
	                        }
	                    }
	                    if(c==1) break;
	                }
	                
	            }
	        }
	    }
	    return tr;
	}
	
	    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends