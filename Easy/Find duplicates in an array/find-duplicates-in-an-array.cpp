//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        map<int , int> store;
        vector<int> result;
        
        for(int i = 0; i<n; i++){
            store[arr[i]]++;
        }
        
        for(auto pair : store){
            if(pair.second > 1){
                result.push_back(pair.first);
            }
        }
        
        if(result.empty()){
            result.push_back(-1);
        }
        return result;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends