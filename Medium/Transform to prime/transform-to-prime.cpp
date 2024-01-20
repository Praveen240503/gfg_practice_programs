//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

int N=1e6+1;
vector<int>primes(N,1);
void sieve(){
    primes[0]=0;
    primes[1]=0;
    for(int i=2;i*i<=N;i++){
        if(primes[i]==1){
            for(int j=i*i;j<=N;j+=i){
                primes[j]=0;
            }
        }
    }
}
class Solution
{
    public:
    int minNumber(int arr[],int n)
    {
        sieve();
        int ar_sum=0,x;
        for(int i=0;i<n;i++){
            ar_sum+=arr[i];
        }
        // if(primes[ar_sum]==1)return 0;
        for(int i=ar_sum;i<INT_MAX;i++){
            if(primes[i]==1){
                x=i;
                break;
            }
        }
        x=x-ar_sum;
        return x;
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends