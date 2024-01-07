//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int bit_count(int x){
        int c=0;
        while(x!=0){
            x&=x-1;
            c++;
        }
        return c;
    }
    int ceillog2(int i){
        int c=0;
        i--;
        while(i>0){
            i=i>>1;
            c++;
        }
        return c;
    }
    bool passed(int n){
        for(int i=n-ceillog2(n);i<n;i++){
            if(i+bit_count(i)==n)return false;
        }
        return true;
    }
	int is_bleak(int n)
	{
	    // Code here.
	    if(passed(n))return 1;
	    return 0;
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends