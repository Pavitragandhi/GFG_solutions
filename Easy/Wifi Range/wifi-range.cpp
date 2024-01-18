//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        
        for(int i = 0; i<N; i++){
            bool check = false;
            if(S[i] == '1'){
                continue;
            }
            else if(S[i] == '0'){
                for(int j = 1; j<=X; j++){
                    if((i-j >= 0 && S[i-j] == '1') || (i+j < N && S[i+j] == '1')){
                        check = true;
                        break;
                    }
                    else{
                        check = false;
                    }
                }
            }
            if(!check){
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends