//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    bool divisorGame(int N){
        bool alice = false;
        
        while(N>1){
            N -= 1;
            alice = !alice;
        }
        return alice;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N; 
        cin >> N;
        
        Solution obj;
        bool ans = obj.divisorGame(N);
        if(ans) cout<<"True"<<endl;
        else cout<<"False"<<endl;
    }
    return 0;
}
// } Driver Code Ends