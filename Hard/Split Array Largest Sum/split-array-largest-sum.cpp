//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool sub_split(int a[],int n,int k,int m){
        int c=0,s=0;
        for(int i=0;i<n;i++){
            s+=a[i];
            if(s>m){
                c++;
                s=a[i];
            }
        }
        c+=1;
        return c<=k;
    }
    int binary(int a[],int n,int k){
        int l=*max_element(a,a+n);
        int h=0;
        for(int i=0;i<n;i++){
            h+=a[i];
        }
        int res=0;
        while(l<=h){
            
            int m=l+(h-l)/2;
            if(sub_split(a,n,k,m)){
                res=m;
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        return res;
    }
    int splitArray(int a[] ,int n, int k) {
        // code here
        return binary(a,n,k);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends