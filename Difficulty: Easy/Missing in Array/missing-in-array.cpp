//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


// User function template for C++
class Solution {
  public:
    int mod  =  1e9;
    int missingNumber(vector<int>& arr) {
        // code here
        long long int n = arr.size()+1;
        long long int sum = (n * (n+1) )/2;
        // cout<<n<<" "<<sum"\n";
        long long int arr_sum = accumulate(arr.begin(), arr.end(),0);
        return (sum - arr_sum);
    }
};




//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.missingNumber(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends