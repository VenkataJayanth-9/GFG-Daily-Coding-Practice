//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // Your code here
                int left = 0, right = arr.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // Compare the mid element with its neighbor
            if (arr[mid] > arr[mid + 1]) {
                // Peak lies on the left side (including mid)
                right = mid;
            } else {
                // Peak lies on the right side
                left = mid + 1;
            }
        }

        // 'left' and 'right' will converge to the peak index
        return left;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        int idx = ob.peakElement(a);
        int n = a.size();
        bool f = 0;
        if (idx < 0 and idx >= n)
            cout << "false" << endl;
        else {
            if (n == 1 and idx == 0)
                f = 1;
            else if (idx == 0 and a[0] > a[1])
                f = 1;
            else if (idx == n - 1 and a[n - 1] > a[n - 2])
                f = 1;
            else if (a[idx] > a[idx + 1] and a[idx] > a[idx - 1])
                f = 1;
            else
                f = 0;
            if (f)
                cout << "true" << endl;
            else
                cout << "false" << endl;
        }
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends