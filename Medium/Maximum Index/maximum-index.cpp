//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
        vector<int> lesser(n), greater(n);
        lesser[0] = a[0];
        greater[n-1] = a[n-1];
        for(int i = 1; i < n; i++) {
            lesser[i] = min( lesser[i-1], a[i]);
            greater[n - i -1] = max( greater[n - i], a[n - i -1]);
        }
         
        int i = 0, j = 0, maxdiff = -1;
        while(i < n and j < n) {
            if(lesser[i] <= greater[j]){
                maxdiff = max(maxdiff,j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return maxdiff;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends