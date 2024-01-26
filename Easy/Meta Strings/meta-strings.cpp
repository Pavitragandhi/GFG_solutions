//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool metaStrings (string s1, string s2);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << metaStrings (s1, s2) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends



bool metaStrings (string S1, string S2)
{
    int n = S1.size();
    int m = S2.size();
    
    if(n != m || S1 == S2){
        return false;
    }
    
    int count = 0;
    int store1;
    int store2;
    
    for(int i = 0; i<n; i++){
        if(S1[i] != S2[i]){
            count++;
            
            if(count == 1){
               store1 = i;
            }
            else if(count == 2){
               store2 = i;
            }
            else if(count > 2){
               return false;
            }
        }
    }
    return ((count == 2) && (S1[store1] == S2[store2]) && (S1[store2] == S2[store1]));
}