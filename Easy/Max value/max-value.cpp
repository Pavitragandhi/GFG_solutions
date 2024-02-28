//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxVal(int a[], int n) {
        int max_value = INT_MIN;
        int min_value = INT_MAX;
        int check = 0;
        
        for(int i = 0; i<n; i++){
            int store = a[i] - i;
            if(store > max_value){
                max_value = store;
                check = i;
            }
        }
        
        for(int i = 0; i<n; i++){
            int store = a[i] - i;
            if(store < min_value && check != i){
                min_value = store;
            }
        }
        
        int result = max_value - min_value;
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
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.maxVal(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends