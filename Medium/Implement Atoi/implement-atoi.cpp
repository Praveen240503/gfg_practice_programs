//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int n=s.size();
        int m=0;
        int f=0,b=0;
        for(auto i:s){
            if((i=='-') and f==0 )b=1;
            else if(i>='0' and i<='9'){
                m=m*10+(i-'0');
                f=1;
            }
            else return -1;
        }
        if(b==0)return m;
        else return m*-1;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends