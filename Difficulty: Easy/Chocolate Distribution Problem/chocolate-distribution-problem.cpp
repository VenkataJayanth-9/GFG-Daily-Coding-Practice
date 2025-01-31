//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findMinDiff(vector<int>& arr, int m) {
        // code here
          if (arr.size() < m) return -1; // Edge case: Not enough packets

        sort(arr.begin(), arr.end()); // Step 1: Sort the array

        int minDiff = INT_MAX; 

        // Step 2: Find the minimum difference in subarrays of size 'm'
        for (int i = 0; i <= arr.size() - m; i++) {
            int diff = arr[i + m - 1] - arr[i];  // Difference between max and min in subarray
            minDiff = min(minDiff, diff);
        }

        return minDiff; // Step 3: Return the minimum difference found
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

        int m;
        cin >> m;
        cin.ignore();
        Solution ob;
        cout << ob.findMinDiff(arr, m) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends