//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        // code here
        vector<int> tr;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(i == 0){
                tr.push_back(0);
                mp[0]++;
            }
            else{
                int temp = tr[i-1]-i;
                if(temp >= 0 && mp[temp] == 0){
                    tr.push_back(temp);
                    mp[temp]++;
                }
                else{
                    temp = tr[i-1]+i;
                    tr.push_back(temp);
                    mp[temp]++;
                }
            }
        }
        return tr;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends