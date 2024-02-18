//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int findPairs(long long a[], long long n)
    {
        unordered_map<int , pair<int , int>> store;
        
        for(int i = 0; i<n-1; i++){
            for(int j = i+1; j<n; j++){
                long long sum = a[i] + a[j];
                if(store.find(sum) != store.end()){
                    return true;
                }
                else{
                    store[sum] = make_pair(a[i] , a[j]);
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
	long long t;
	
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long a[n];
	    for(long long i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }
	    Solution ob;
	    cout << ob.findPairs(a, n) << endl;   
	    }
	return 0;
}

// } Driver Code Ends