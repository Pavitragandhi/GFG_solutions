//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string transform(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << transform(s) << endl;
    }
return 0;
}


// } Driver Code Ends


string transform(string S){
    int n = S.size();
    int count = 0;
    string result = "";
    int store = 0;
    
    for(int i = 0; i<n; i++){
        if(i == n-1){
            count++;
            store = count;
            result += to_string(store);
            result += tolower(S[i]);
            break;
        }
        if(tolower(S[i]) == tolower(S[i+1])){
            count++;
        }
        else{
            count++;
            store = count;
            result += to_string(store);
            result += tolower(S[i]);
            count = 0;
        }
    }
    return result;
}

