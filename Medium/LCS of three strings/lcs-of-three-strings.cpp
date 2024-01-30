//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
int dp[21][21][21];
class Solution
{
    public:
        
        int lcs(string &text1, string &text2, string &text3, int ind1,int ind2, int ind3){
            if(ind1<0 || ind2<0 || ind3<0)return 0;
            
            if(dp[ind1][ind2][ind3]!=-1)return dp[ind1][ind2][ind3];
            
            if(text1[ind1]==text2[ind2] and text1[ind1]== text3[ind3]){
                
                return dp[ind1][ind2][ind3] = 1+lcs(text1,text2, text3,ind1-1,ind2-1, ind3-1);
            }
            return dp[ind1][ind2][ind3]=max(lcs(text1,text2, text3,ind1-1,ind2, ind3),max(lcs(text1,text2,text3,ind1,ind2-1, ind3),lcs(text1,text2, text3,ind1,ind2, ind3-1)));
            
        
        }
        int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
        {
            // your code here
            memset(dp,-1,sizeof(dp));
            
            return lcs(A,B,C,n1-1,n2-1,n3-1);
            
        }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        Solution obj;
        cout << obj.LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends