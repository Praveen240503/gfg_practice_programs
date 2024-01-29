//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    bool is_palin(string &s){
        // int a=0;
        
        // for(int i=0;i<s.size();i++){
        //     a ^= (1<<s[i]-'a');
        // }
        
        // if(a & a-1  != 0)return false;
        // return true;
        return (s==string(s.rbegin(),s.rend()));
    }
    void find_palin(string &s, vector<string>&temp , vector<vector<string>>&tr,int i, int n){
        
        if(i==n){
            tr.push_back(temp);
            return;
        }
        for(int k=i;k<n;k++){
            string str=s.substr(i,k-i+1);
            if(is_palin(str)){
                temp.push_back(str);
                find_palin(s,temp,tr,k+1,n);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> allPalindromicPerms(string s) {
        // code here
        int n=s.size();
        vector<vector<string>>tr;
        vector<string>temp;
        find_palin(s,temp,tr,0,n);
        return tr;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin>>S;

        Solution ob;
        vector<vector<string>> ptr = ob.allPalindromicPerms(S);
        
        for(int i=0; i<ptr.size(); i++)
        {
            for(int j=0; j<ptr[i].size(); j++)
            {
                cout<<ptr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends