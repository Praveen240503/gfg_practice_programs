class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        int n = arr.size();
        int smallest = arr[0], ssmallest = INT_MAX;
        for(int i = 1; i < n ; i++ ) {
            if(arr[i] < smallest){
                ssmallest = smallest;
                smallest = arr[i];
            }
            else if( arr[i] != smallest && arr[i] <ssmallest){
                ssmallest = arr[i];
            }
        }
        if(ssmallest == INT_MAX)return {-1};
        return {smallest, ssmallest};
    }
};