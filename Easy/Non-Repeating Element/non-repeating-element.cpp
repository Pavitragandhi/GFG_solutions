//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        unordered_map<int , int> store_1;
        unordered_map<int , int> store_2;
        
        for(int i = 0; i<n; i++){
            store_1[arr[i]]++;
            store_2[arr[i]] = i;
        }
        
        int index = INT_MAX;
        int result = 0;
        
        for(int i = 0; i<n; i++){
            if(store_1[arr[i]] == 1 && store_2[arr[i]] < index){
                index = store_2[arr[i]];
                result = arr[i];
            }
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
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.firstNonRepeating(arr,n)<<endl;
    }
}

// } Driver Code Ends