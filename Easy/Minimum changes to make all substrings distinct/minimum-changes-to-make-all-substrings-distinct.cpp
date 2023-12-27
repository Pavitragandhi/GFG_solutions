//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minChange(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << minChange(s) << endl;
    }
return 0;
}

// } Driver Code Ends


int minChange(string S) { 
     int count = 0;
     int n = S.size();
     sort(S.begin() , S.end());
     
     for(int i = 0; i<n-1; i++){
         if(S[i] == S[i+1]){
             count++;
         }
     }
     return count;
} 
