//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        vector<int> store;
        store.push_back(0);
        store.push_back(1);
        
        for(int i = 1; i<n; i++){
            int sum = store[i-1] + store[i];
            sum = sum % 1000000007;
            store.push_back(sum);
        }
        
        return store[n];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends