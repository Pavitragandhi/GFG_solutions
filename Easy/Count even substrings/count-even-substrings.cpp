//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
long long evenNumSubstring(string str);

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << evenNumSubstring(s) << endl;
    }
return 0;
}





// } Driver Code Ends


long long evenNumSubstring(string S){
    long long count = 0;
    int n = S.size();
    
    for(int i = n-1; i>=0; i--){
        if((S[i] - '0')%2 == 0){
            count += i+1;
        }
    }
    return count;
}