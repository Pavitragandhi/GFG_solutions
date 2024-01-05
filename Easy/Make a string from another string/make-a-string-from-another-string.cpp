//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool isPoss (string A, string B);
int main()
{
    int t; cin >> t;
    char ch;
    while (t--)
    {
        string A; cin >> A;
        string B; cin >> B;
        cout << isPoss (A, B) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


//User function Template for C++

bool isPoss (string A, string B)
{
    unordered_map<char , int> store;
    
    for(char c : B){
        store[c]++;
    }
    
    for(char c : A){
        if(store.find(c) != store.end() && store[c] > 0){
            store[c]--;
        }
        else if(store.find(c) != store.end() && store[c] == 0){
            return false;
        }
        else if(store.find(c) == store.end()){
            return false;
        }
    }
    return true;
}