//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        int result = INT_MAX;
        unordered_map<int , int> store;
        
        for(int i = n-1; i>=0; i--){
            store[arr[i]]++;
            
            if(store[arr[i]] > 1){
                result = min(result , i+1);
            }
        }
        if(result == INT_MAX){
            return -1;
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends