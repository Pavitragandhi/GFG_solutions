//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        int n = arr.size();
        int left = 0;
        int right = n-1;
        vector<int> result;
        int minimum = INT_MAX;
        int sum = 0;
        
        while(left < right){
            sum = arr[left] + arr[right];
            int diff = abs(sum - x);
            
            if(diff < minimum){
                minimum = diff;
                result = {arr[left] , arr[right]};
            }
            else if(diff == minimum){
                if(abs(arr[left] - arr[right]) > abs(result[0] - result[1])){
                    result = {arr[left] , arr[right]};
                }
            }
            
            if(sum < x){
                left++;
            }
            else{
                right--;
            }
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumClosest(arr, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends