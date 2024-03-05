//{ Driver Code Starts


#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:

	
	bool checkDuplicatesWithinK(int arr[], int n, int k) {
	    unordered_map<int , int> store;
	    
	    if(k > n){
	        return false;
	    }
	    
	    for(int i = 0; i<n; i++){
	        if(store.find(arr[i]) == store.end()){
	            store[arr[i]] = i;
	        }
	        else if(store.find(arr[i]) != store.end()){
	            if((i - store[arr[i]]) <= k){
	                return true;
	            }
	            else{
	                store[arr[i]] = i;
	            }
	        }
	    }
	    return false;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkDuplicatesWithinK(arr, n, k);
        if(ans){
            cout<<"True\n";
        }else{
            cout<<"False\n";
        }
    }
    return 0;
}
// } Driver Code Ends