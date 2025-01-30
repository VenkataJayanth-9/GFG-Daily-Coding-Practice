//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // void merge(vector<int>& arr, int l, int r){
    //     int mid = (l+r)/2;
    //     int size = arr.size();
    //     vector<int> B(size);
    //     int i = l;
    //     int j = mid+1;
    //     int k = 0;
    //     while(i<=mid && j<=r){
    //         if(arr[i]<arr[j]){
    //             B[k++] = arr[i++];
    //         }
    //         else{
    //             B[k++] = arr[j++];
    //         }
    //     }
    //     while(i<=mid){
    //         B[k++] = arr[i++];
    //     }
    //     while(j<=r){
    //         B[k++] = arr[j++];
    //     }
    //     for(int x = 0; x<k; x++){
    //         arr[l+x] = B[x];
    //     }
    // }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        sort(arr.begin(), arr.end());
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.mergeSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends