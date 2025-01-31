//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
         int size = arr.size();  // Get the size of the array
    for (int i = 1; i < size; i++) {  // Start from the second element
        int temp = arr[i];  // Store the current element (key)
        int j = i - 1;  // Set j to the element before the current one
        
        // Shift elements of arr[0..i-1] that are greater than temp
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];  // Shift the element to the right
            j--;  // Move to the previous element
        }
        
        arr[j + 1] = temp;
    }
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
        obj.insertionSort(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends