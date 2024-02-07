//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        map<char , int> a_map;
        map<char , int> b_map;
        
        int n = a.size();
        int m = b.size();
        
        if(n != m){
            return false;
        }
        
        for(int i = 0; i<n; i++){
            a_map[a[i]]++;
            b_map[b[i]]++;
        }
        
        if(a_map == b_map){
            return true;
        }
        return false;
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends