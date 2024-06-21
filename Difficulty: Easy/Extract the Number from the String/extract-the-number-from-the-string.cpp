//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        // code here
        long long maxi=-1;
        int n = s.length();

        for(int i=0; i<n; i++){
            string temp = "";
            int choose=0;
    
            while(isdigit(s[i])){
                if(s[i]=='9'){
                    choose=1;
                }
                temp += s[i];
                i++;
            }

            if (!temp.empty() && !choose) {
                maxi = max(maxi, stoll(temp));
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends