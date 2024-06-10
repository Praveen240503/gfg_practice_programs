//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &a, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &a[i]);
        }
    }

    template <class T>
    static void print(vector<T> &a) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        // code here
        vector<pair<int, int>> diff(n);
        
        for (int i = 0; i < n; ++i) {
            diff[i] = {i, abs(arr[i] - brr[i])};
        }
        
        sort(diff.begin(), diff.end(),[](const pair<int, int> &a, const pair<int, int> &b) {
            return a.second > b.second;
        });
        
        // for(auto it:diff){
        //     cout<<it.first<<"--->"<<it.second<<"\n";
        // }
        
        long long ans = 0;
        int ax = 0, ay = 0;

        for (int i = 0; i < n; ++i) {
            int ind = diff[i].first;

            if (arr[ind] >= brr[ind]) {
                if (ax < x) {
                    ans += arr[ind];
                    ax++;
                } else {
                    ans += brr[ind];
                    ay++;
                }
            } else {
                if (ay < y) {
                    ans += brr[ind];
                    ay++;
                } else {
                    ans += arr[ind];
                    ax++;
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        int y;
        scanf("%d", &y);

        vector<int> arr(n);
        Array::input(arr, n);

        vector<int> brr(n);
        Array::input(brr, n);

        Solution obj;
        long long res = obj.maxTip(n, x, y, arr, brr);

        cout << res << endl;
    }
}

// } Driver Code Ends