//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:

    bool isPossible(int d , vector<int> &stalls,int cows)
    {
        int total = 1;
        int last = stalls[0];
        for(int i=1;i<stalls.size();i++)
        {
            if(stalls[i]-last >= d)
            {
                total++;
                last = stalls[i];
            }
        }
        
        return total>=cows;
    }

        // Write your code here

    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        
        int mini = 1;
        sort(stalls.begin(),stalls.end());
        int n = stalls.size();
        int maxi = stalls[n-1]-stalls[0];
        
        int low = mini , high =maxi;
        int ans = 0;
        while(low <=high)
        {
            int mid = low+(high-low)/2;
            
            if(isPossible(mid,stalls,k))
            {
                ans = max(ans , mid);
                low = mid+1;
            }
            else
            {
                high = mid-1;                       
            }
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends