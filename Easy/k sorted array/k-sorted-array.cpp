//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k)
    {
        unordered_map<int , int> store;
        
        for(int i = 0; i<n; i++){
            store[arr[i]] = i;
        }
        
        sort(arr , arr+n);
        
        for(int i = 0; i<n; i++){
            int og_index = store[arr[i]];
            
            if(abs(i - og_index) > k){
                return "No";
            }
        }
        return "Yes";
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>k;
	    Solution ob;
	cout <<ob.isKSortedArray(arr, n, k)<<endl;
	}
	return 0;	 
}
// } Driver Code Ends