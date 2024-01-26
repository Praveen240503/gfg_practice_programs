//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int tr[], int low, int mid, int high)
    {
         // Your code here
        int i=low;
        int j=mid+1;
        vector<int>temp;
        while(i<=mid and j<=high){
            if(tr[i]<tr[j]){
                temp.push_back(tr[i++]);
            }
            else{
                temp.push_back(tr[j++]); 
            }
        }
        while(i<=mid){
            temp.push_back(tr[i++]);
        }
        while(j<=high){
            temp.push_back(tr[j++]);
        }
        for(int i=low;i<=high;i++){
            tr[i]=temp[i-low];
        }
    }
    public:
    void mergeSort(int tr[], int low, int high)
    {
        //code here
        if(low>=high)return;
        int mid=low+(high-low)/2;
        mergeSort(tr,low,mid);
        mergeSort(tr,mid+1,high);

        merge(tr,low,mid,high);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends