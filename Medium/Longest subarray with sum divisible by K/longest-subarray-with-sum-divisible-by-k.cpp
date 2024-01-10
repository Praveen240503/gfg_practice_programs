//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    int ans=0,sum=0,rem=0;
	    unordered_map<int,int>tr;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	        rem=sum%k;
	        if(rem<0)rem+=k;
	        if(rem==0) ans=max(ans,i+1);
            else{
                if(tr.find(rem)!=tr.end()) ans=max(ans,i-tr[rem]);
                else tr[rem]=i;
            }
	        
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends