//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        int start = 0;
        int end = n-1;
        int mid = start + (end - start)/2;
        int result = -1;
        
        while(start <= end){
            if(arr[mid] == 1){
                result = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            
            mid = start + (end - start)/2;
        }
        return result;
    }
};


//{ Driver Code Starts.
int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends