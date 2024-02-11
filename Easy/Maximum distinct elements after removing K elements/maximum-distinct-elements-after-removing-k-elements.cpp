//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxDistinctNum(int arr[], int n, int k)
    {
    	unordered_set<int> store;
    	
    	for(int i = 0; i<n; i++){
    	    store.insert(arr[i]);
    	}
    	
    	int check = n - store.size();
    	if(check == k){
    	    return store.size();
    	}
    	else if(check < k){
    	    return store.size() - (k - check);
    	}
    	else{
    	    return store.size();
    	}
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i,k;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout <<ob.maxDistinctNum(arr, n, k)<<"\n";
	  }
	return 0;
}

// } Driver Code Ends