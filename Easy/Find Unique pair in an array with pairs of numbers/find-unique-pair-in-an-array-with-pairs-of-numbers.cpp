//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    vector<int> findUniquePair(int arr[], int n)
    {
    	map<int , int> store;
    	
    	for(int i = 0; i<n; i++){
    	    store[arr[i]]++;
    	    
    	    if(store[arr[i]] == 2){
    	        store.erase(arr[i]);
    	    }
    	}
    	
    	vector<int> result;
    	
    	for(auto pair : store){
    	    result.push_back(pair.first);
    	}
    	return result;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n; 
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    vector<int> v;
	    Solution ob;
	    v = ob.findUniquePair(a, n);
	    cout<<v[0]<<" "<<v[1]<<endl;
	}
	return 0;
}

// } Driver Code Ends