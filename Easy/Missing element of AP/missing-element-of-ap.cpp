//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMissing(int arr[], int n) {
        int d = (arr[n-1] - arr[0])/n;
        
        int start = 0;
        int end = n-1;
        int mid = start + (end - start)/2;
        int result = -1;
        
        while(start <= end){
            if(arr[mid] != (arr[0] + mid*d)){
                result = arr[0] + mid*d;
                end = mid - 1;
            }
            
            if(arr[mid] == (arr[0] + mid*d)){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            
            mid = start + (end - start)/2;
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends