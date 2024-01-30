//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    vector<int> distributeGift(vector<int> arr[], int n) {
        vector<int> result;
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(find(result.begin() , result.end() , arr[i][j]) == result.end()){
                    result.push_back(arr[i][j]);
                    break;
                }
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
        int n;
        cin >> n;
        vector<int> arr[n];
        for (int i = 0; i < n; i++) {
            arr[i].assign(n, 0);
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.distributeGift(arr, n);
        for (auto gift : ans) {
            cout << gift << " ";
        }
        cout << "\n";
    }
    return 0;
}


// } Driver Code Ends