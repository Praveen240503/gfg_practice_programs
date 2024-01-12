//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    int com_pri(int l,int r){
	        int com=0,pri=0;
	        vector<int>tr(r+1,1);
	        tr[0]=0;
	        tr[1]=0;
	        for(int i = 2; i * i <= r; i++){
	            
	            if(tr[i] == 1){
	                
	                for(int j = i*i; j <= r; j += i){
	                    tr[j]=0;
	                }
	            }
	        }
	        
	        for(int i=l;i<=r;i++){
	            if(tr[i]==1)pri++;
	            else com++;
	        }
	        if(l==1)com--;
	        return com-pri;
	        
	    }
		int Count(int l, int r){
		    // Code here
		    return com_pri(l,r);
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int L, R;
		cin >> L >> R;
		Solution obj;
		int ans = obj.Count(L, R);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends