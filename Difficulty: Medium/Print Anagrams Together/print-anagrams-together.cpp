//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        unordered_map<string, vector<string>> groups;
        vector<string> order; // To maintain the order of first appearance

        // Iterate over the array
        for (const string& str : arr) {
            // Sort the string to use as a key
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());

            // Group anagrams and maintain order
            if (groups.find(sortedStr) == groups.end()) {
                order.push_back(sortedStr); // Add key to order if it's new
            }
            groups[sortedStr].push_back(str);
        }

        // Prepare the result
        vector<vector<string>> result;
        for (const string& key : order) {
            result.push_back(groups[key]);
        }

        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<string> arr;
        string input_line;
        getline(cin, input_line);
        stringstream ss(input_line);
        string word;
        while (ss >> word) {
            arr.push_back(word);
        }

        Solution ob;
        vector<vector<string> > result = ob.anagrams(arr);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends