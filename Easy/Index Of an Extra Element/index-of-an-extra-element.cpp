//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        int start = 0;
        int end = n;
        int mid = start + (end - start)/2;
        int result = 0;
        
        while(start <= end){
            if(a[mid] == b[mid]){
                start = mid + 1;
            }
            else{
                result = mid;
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
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}
// } Driver Code Ends