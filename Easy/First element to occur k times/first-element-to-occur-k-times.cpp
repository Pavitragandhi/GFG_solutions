//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int firstElementKTime(int n, int k, int a[])
    {
        int result = -1;
        unordered_map<int , int> store;
        
        for(int i = 0; i<n; i++){
            store[a[i]]++;
            
            if(store[a[i]] == k){
                result = a[i];
                break;
            }
        }
        return result;
    }
};


//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(n, k, a)<<endl;
	}
	
	return 0;
}
// } Driver Code Ends