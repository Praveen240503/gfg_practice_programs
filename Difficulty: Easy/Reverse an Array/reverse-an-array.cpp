class Solution {
  public:
    void function (int i, vector<int> &arr){
        if(i >= arr.size() /2)return;
        swap(arr[i], arr[arr.size()-i-1]);
        function(i+1,arr);
    }
    void reverseArray(vector<int> &arr) {
        // code here
        function(0,arr);
    }
};