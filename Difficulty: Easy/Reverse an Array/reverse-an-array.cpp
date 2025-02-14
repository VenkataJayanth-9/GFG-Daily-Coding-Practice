//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    void reverse(vector<int> &arr, int i, int size){
        if(size <= i){
            return;
        }
        int temp = arr[i];
        arr[i] = arr[size];
        arr[size] = temp;
        reverse(arr, i+1, size-1);
    }
    void reverseArray(vector<int> &arr) {
        // code here
        int i = 0;
        int size = arr.size()-1;
        reverse(arr, i, size);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.reverseArray(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends