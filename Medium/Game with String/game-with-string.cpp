//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        if(s=="") return 0;
        map <char, int> mp;
        int ans = 0;
        priority_queue <int> que;
        for(int i = 0; i < s.size(); i++ ) {
            mp[s[i]]++;
        }
        for(auto it : mp) {
            que.push(it.second);
        }
        
        while( !que.empty() and k>0) {
            int a = que.top();
            que.pop();
            a--;
            que.push(a);
            k--;
        }
        while( !que.empty()) {
            int n = que.top();
            ans+=(n*n);
            que.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends