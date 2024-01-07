//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Your logic here
        int ans=0;
        n=n+1;
        for(int i=0;i<32;i++){
            int x=n/(int)pow(2,i+1);
            x=x*(int)pow(2,i);
            ans+=x;
            int y=n%((int)pow(2,i+1));
            if(pow(2,i)<y){
                ans+=y%(int)pow(2,i);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends