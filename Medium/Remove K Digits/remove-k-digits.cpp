//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string s, int k) {
        string ans="";
        if(k==s.size())return "0";
        stack<int>st;
        for(int i=0;i<s.size();i++){
            
            while( k>0 && (!st.empty()) && (s[i]-'0' < st.top()) ){
                st.pop();
                k--;
            }
            if(s[i]-'0'!=0 || !st.empty()){
                st.push(s[i]-'0');
            }
        }
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        
        while(!st.empty()){
            ans+=(st.top()+'0');
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        if(ans=="")return "0";
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends