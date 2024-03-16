//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maxDepth(string s) {
        int maxDepth = 0;
        int currentDepth = 0;

        for(char c : s){
            if(c == '('){
               currentDepth++;
               maxDepth = max(maxDepth, currentDepth);
            } 
            else if(c == ')'){
               currentDepth--;
            }
        }
        return maxDepth;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        int ans = obj.maxDepth(s);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends