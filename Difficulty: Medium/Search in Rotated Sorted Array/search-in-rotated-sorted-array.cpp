//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // complete the function here
        int left = 0, right = arr.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Check if the middle element is the key
            if (arr[mid] == key) {
                return mid;
            }

            // Determine which half is sorted
            if (arr[left] <= arr[mid]) {
                // Left half is sorted
                if (key >= arr[left] && key < arr[mid]) {
                    right = mid - 1; // Key is in the left half
                } else {
                    left = mid + 1; // Key is in the right half
                }
            } else {
                // Right half is sorted
                if (key > arr[mid] && key <= arr[right]) {
                    left = mid + 1; // Key is in the right half
                } else {
                    right = mid - 1; // Key is in the left half
                }
            }
        }

        // Key not found
        return -1;

    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends