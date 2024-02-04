//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        unordered_map<string , int> store;
        
        for(int i = 0; i<n; i++){
            store[arr[i]]++;
        }
        
        int maximum = INT_MIN;
        
        for(auto pair : store){
            maximum = max(maximum , pair.second);
        }
        
        vector<int> store_2;
        for(auto pair : store){
            if(pair.second < maximum){
                store_2.push_back(pair.second);
            }
        }
        
        sort(store_2.begin() , store_2.end());
        
        for(auto pair : store){
            if(pair.second == store_2[store_2.size() - 1]){
                return pair.first;
            }
        }
        return "-1";
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
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends