class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        
        
        int i = 0, n = arr.size();
        vector<int> tr;
        tr.push_back(arr[0]);
        for(int j = 1; j < n; j++) {
            if(tr[i] != arr[j]){
                tr.push_back(arr[j]);
                i++;
            }
        }
        return tr;
    }
};