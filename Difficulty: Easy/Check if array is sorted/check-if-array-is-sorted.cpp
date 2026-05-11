class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        for(int i = 1 ; i < arr.size() ; i++ ) {
            if (arr[i-1] <= arr[i]){
                
            }
            else{
                return false;
            }
        }
        return true;
    }
};