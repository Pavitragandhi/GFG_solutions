//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int fun(string s);

int main() {
    int tt;
    string s;
    cin >> tt;
    while (tt--) {
        cin >> s;
        cout<<fun(s)<<endl;
        
    }
    return 0;
}
// } Driver Code Ends


int fun(string s)
{
    unordered_set<string> store;
    int n = s.size();
    
    for(int i = 0; i<n-1; i++){
        string p = s.substr(i , 2);
        store.insert(p);
    }
    int result = store.size();
    return result;
}