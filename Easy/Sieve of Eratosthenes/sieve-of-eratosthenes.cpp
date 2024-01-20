//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieve(int n){
        vector<int>tr(n+1,1);
        tr[0]=0;
        tr[1]=0;
        for(int i=2;i*i<=n;i++){
            if(tr[i]==1){
                for(int j=i*i;j<=n;j+=i){
                    tr[j]=0;
                }
            }
        }
        return tr;
    }
    vector<int> sieveOfEratosthenes(int n)
    {
        // Write Your Code here
        vector<int>tr;
        vector<int>tr1;
        tr=sieve(n);
        for(int i=0;i<=n;i++){
            if(tr[i]==1)tr1.push_back(i);
        }
        return tr1;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends