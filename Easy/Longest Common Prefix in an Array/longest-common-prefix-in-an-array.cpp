//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        string result = arr[0];
        string store = "";
        
        for(int i = 1; i<N; i++){
            int n = arr[i].size();
            for(int j = 0; j<n; j++){
                string check = arr[i].substr(0 , j+1);
                if(result.find(check) != string::npos){
                    store = check;
                }
                else{
                    if(store.empty()){
                        return "-1";
                    }
                    break;
                }
            }
            
            result = store;
            store = "";
        }
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends