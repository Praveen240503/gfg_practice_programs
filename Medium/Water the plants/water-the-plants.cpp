//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    static bool wanted_sort(pair<int,int>&a,pair<int,int>&b){
        if(a.first==b.first)return a.second>b.second;
        return a.first<b.first;
    }
    int min_sprinklers(int arr[], int n)
    {
        // code here
        vector<pair<int,int>>tr,tr1;
        for(int i=0;i<n;i++){
            int l=0;
            int r=0;
            if(arr[i]>-1){
                l=i-arr[i]<0?0:i-arr[i];
                r=i+arr[i]>=n?n-1:i+arr[i];
                tr.push_back({l,r});
            }
        }
        sort(tr.begin(),tr.end(),wanted_sort);
        
        for(auto it : tr){
            if(tr1.empty())tr1.push_back(it);
            else if(it.second>tr1.back().second)tr1.push_back(it);
        }
        int ans=0;
        int i=0;
        if(tr1[0].first!=0 or tr1.back().second!=n-1)return -1;
        while(i<tr1.size()){
            
            int j=i+1;
            ans++;
            bool f = 0;
            int pre = tr1[i].second;
            while(j<tr1.size()){
                if(tr1[j].first>pre+1){
                    if(!f)return -1;
                    j-=1;
                    break;
                }
                f=1;
                if(j==tr1.size()-1){
                    break;
                }
                j+=1;
            }
            i=j;
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
        int n;
        cin>>n;
        
        int gallery[n];
        for(int i=0; i<n; i++)
            cin>> gallery[i];
        Solution obj;
        cout<< obj.min_sprinklers(gallery,n) << endl;
    }
	return 1;
}

// } Driver Code Ends