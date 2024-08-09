//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long result = arr[0];
	    long long max_check = arr[0];
	    long long min_check = arr[0];
	    
	    for(int i = 1; i<n; i++){
	        if(arr[i] < 0){
	            swap(max_check , min_check);
	        }
	        long long store_1 = arr[i];
	        max_check = max(store_1 , max_check*store_1);
	        min_check = min(store_1 , min_check*store_1);
	        
	        result = max(result , max_check);
	    }
	    return result;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends