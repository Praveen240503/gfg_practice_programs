//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int dp[1001][1001];
    int func(int i, int w, int wt[], int val[], int n){
        if(i>=n || w <= 0)return 0;
        
        if(dp[w][i] != -1) return dp[w][i];
        
        //non-pick call
        if(wt[i] > w)
            return dp[w][i] = func(i+1,w,wt,val,n);
            
        //pick call
        return dp[w][i] = max(val[i] + func(i+1, w - wt[i], wt, val, n) , func(i+1,w,wt,val,n));
    }
    int knapSack(int w, int wt[], int val[], int n) 
    { 
       // Your code here
       memset(dp,-1,sizeof(dp));
       return func(0,w,wt,val,n);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends