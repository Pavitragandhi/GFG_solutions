//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        int num = 1;
        long long result = 0;
        
        for(int i = 1; i<=n; i++){
            long long store = 1;
            for(int j = 0; j<i; j++){
                store = (store*num)%1000000007;
                num++;
            }
            result = (result + store)%1000000007;
        }
        return result;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends