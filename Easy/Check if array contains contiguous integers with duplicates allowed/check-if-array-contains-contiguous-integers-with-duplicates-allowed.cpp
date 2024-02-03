//{ Driver Code Starts
// C++ implementation to check whether the array
// contains a set of contiguous integers
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    // Function to check whether the array contains
    // a set of contiguous integers
    bool areElementsContiguous(int arr[], int n)
    {
        set<int> store;
        
        for(int i = 0; i<n; i++){
            store.insert(arr[i]);
        }
        
        vector<int> store_2(store.begin() , store.end());
        
        for(int i = 0; i<store_2.size()-1; i++){
            if(store_2[i+1] - store_2[i] > 1){
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n + 1];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        if (ob.areElementsContiguous(arr, n))
            cout << "Yes" <<endl;
        else
            cout << "No" <<endl;
    }
	return 0;
}

// } Driver Code Ends