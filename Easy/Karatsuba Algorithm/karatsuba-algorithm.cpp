//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long karatsubaAlgo(string A, string B) {
        long long decimal_A = binarytodecimal(A);
        long long decimal_B = binarytodecimal(B);
        
        long long result = decimal_A * decimal_B;
        return result;
    }
    
  private:
    long long binarytodecimal(string x){
        return bitset<32>(x).to_ulong();
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string A,B;

        cin>>A>>B;

        Solution ob;
        cout << ob.karatsubaAlgo(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends