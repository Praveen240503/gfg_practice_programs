//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses

class Solution
{
    public:
    void generate(int op,int cl, int n,string &ans, vector<string>&tr){
        
        if(op==n and cl==n){
            tr.push_back(ans);
            return;
        }
        
        if(op<n){
            ans+='(';
            generate(op+1,cl,n,ans,tr);
            ans.pop_back();
        }
        if(op>cl and cl<n){
            ans+=')';
            generate(op,cl+1,n,ans,tr);
            ans.pop_back();
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string>tr;
        string ans="";
        generate(0,0,n,ans,tr);
        return tr;
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
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends