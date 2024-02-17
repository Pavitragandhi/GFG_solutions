//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool isValid (string s, int n);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int n ; cin >> n;

        cout << isValid (s, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


bool isValid (string s, int n)
{
    int count = 0;
    
    for(char c : s){
        if(c == 'S'){
            count++;
            if(count > n){
                return false;
            }
        }
        else if(c == 'R'){
            count = 0;
        }
    }
    return true;
}