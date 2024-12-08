//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
         if (arr.empty()) return {};

        // Step 1: Sort the intervals by the start times
        sort(arr.begin(), arr.end());

        // Step 2: Use a result vector to store merged intervals
        vector<vector<int>> merged;

        // Step 3: Iterate through the intervals
        for (const auto& interval : arr) {
            // If merged is empty or the current interval does not overlap with the last merged interval
            if (merged.empty() || merged.back()[1] < interval[0]) {
                // Add the current interval to merged
                merged.push_back(interval);
            } else {
                // There is an overlap, merge the intervals by updating the end time
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }

        return merged;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<vector<int>> arr(n);
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            arr[i].push_back(x);
            arr[i].push_back(y);
        }
        Solution obj;
        vector<vector<int>> ans = obj.mergeOverlap(arr);
        for (auto i : ans) {
            for (auto j : i) {
                cout << j << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends