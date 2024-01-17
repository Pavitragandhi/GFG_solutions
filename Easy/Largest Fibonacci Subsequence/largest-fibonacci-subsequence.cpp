//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    vector<int> findFibSubset(int arr[], int n) {
        vector<int> result;
        for(int i = 0; i<n; i++){
            bool check = fibo_check(arr[i]);
            if(check){
                result.push_back(arr[i]);
            }
        }
        return result;
    }
    
    private:
    bool check_2(long long x){
        long long root = static_cast<int>(sqrt(x));
        return x == root*root;
    }
    
    bool fibo_check(long long x){
        return check_2(5*x*x-4) || check_2(5*x*x+4);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        vector<int> answer = ob.findFibSubset(a, n);
        for (int i = 0; i < answer.size(); i++) {
            cout << answer[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends