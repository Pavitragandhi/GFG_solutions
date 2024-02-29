//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:
    vector<int> longestCommonPrefix(string str1, string str2){
        int n = str1.size();
        vector<int> result(2);
        
        for(int i = 0; i<n; i++){
            string sub = str1.substr(0 , i);
            if(str2.find(sub) != string::npos){
                result[0] = 0;
                result[1] = i-1;
            }
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string str1,str2;
        cin >> str1>> str2;
        Solution ob;
        vector<int> p;
        p = ob.longestCommonPrefix(str1,str2);
        if(p[0]==-1)
        cout<<"-1\n";
        
        else
        cout<<p[0]<<" "<<p[1]<<"\n";
    }
    return 0;
}

// } Driver Code Ends