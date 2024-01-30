//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    void cnt_disk(int N, int src , int help , int des , long long &cnt){
        if(N>0){
            cnt_disk(N-1, src , des , help , cnt);
            
            cout<<"move disk "<<N<<" from rod "<<src<<" to rod "<<des<<"\n";
            
            cnt++;
            
            cnt_disk(N-1, help, src, des, cnt);
        }
    }
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        int src=from;
        int des=to;
        int help=aux;
        long long cnt=0;
        
        cnt_disk(N, src, help, des, cnt );
        return cnt;
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}



// } Driver Code Ends