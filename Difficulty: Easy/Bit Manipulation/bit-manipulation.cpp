//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void bitManipulation(int num, int i) {
        // your code here
          int mask = (1 << (i - 1));  // Convert 1-based index to 0-based
        
        // Get i-th bit (1 or 0)
        int getBit = (num & mask) ? 1 : 0;
        
        // Set i-th bit (force it to 1)
        int setBitNum = (num | mask);
        
        // Clear i-th bit (force it to 0)
        int clearBitNum = (num & ~mask);
        
        // Print results as required
        cout << getBit << " " << setBitNum << " " << clearBitNum;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends