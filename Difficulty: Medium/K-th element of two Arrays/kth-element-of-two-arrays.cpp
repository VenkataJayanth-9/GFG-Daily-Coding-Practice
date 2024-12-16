//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        int m = a.size();
        int n = b.size();

        // Ensure a[] is the smaller array
        if (m > n) return kthElement(b, a, k);

        int left = 0, right = min(k, m);

        while (left <= right) {
            int midA = left + (right - left) / 2;
            int midB = k - midA;

            // Bounds for b's partition
            if (midB < 0 || midB > n) {
                if (midB < 0) right = midA - 1;
                else left = midA + 1;
                continue;
            }

            int aLeft = (midA > 0) ? a[midA - 1] : INT_MIN;
            int bLeft = (midB > 0) ? b[midB - 1] : INT_MIN;

            int aRight = (midA < m) ? a[midA] : INT_MAX;
            int bRight = (midB < n) ? b[midB] : INT_MAX;

            // Found the correct partition
            if (aLeft <= bRight && bLeft <= aRight) {
                return max(aLeft, bLeft);
            }

            // Adjust partitions
            if (aLeft > bRight) {
                right = midA - 1; // Move left in a[]
            } else {
                left = midA + 1; // Move right in a[]
            }
        }

        // Should never reach here if input is valid
        return -1;
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends