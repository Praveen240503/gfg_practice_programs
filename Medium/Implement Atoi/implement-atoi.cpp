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
        int ans=0;
        int i=0,b=0;
        if(s[0]=='-'){
            b=1;
            i=1;
        }
        while(i<s.size()){
            if(s[i]>='0' and s[i]<='9'){
                ans=ans * 10 + (s[i]-'0');
            }
            else return -1;
            i++;
        }
        if(b==1)return -1*ans;
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
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends