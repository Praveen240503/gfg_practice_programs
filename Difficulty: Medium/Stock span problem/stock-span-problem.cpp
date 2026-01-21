class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        stack<int>st;
        int n = arr.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            int add = 1;
            while(!st.empty() && arr[st.top()]<=arr[i]){
                // cout<<ans[st.top()]<<" ";
                add += ans[st.top()];
                st.pop();
            }
            // cout<<i<<" ";
            st.push(i);
            // cout<<add<<" ";
            ans[i] = add;
        }
        return ans;
    }
};