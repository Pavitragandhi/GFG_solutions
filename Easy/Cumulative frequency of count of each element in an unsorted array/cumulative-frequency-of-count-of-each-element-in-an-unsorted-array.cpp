//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    vector<int> countFreq(int a[], int n) 
    { 
        vector<int> result;
        map<int , int> store;
        
        for(int i = 0; i<n; i++){
            store[a[i]]++;
        }
        
        int sum = 0;
        for(auto pair : store){
            sum += pair.second;
            result.push_back(sum);
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
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution ob;
	    vector<int> v;
	    v = ob.countFreq(arr, n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout<<'\n';
	}
	return 0;
}
// } Driver Code Ends