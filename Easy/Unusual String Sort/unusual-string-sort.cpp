//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string stringSort (string s)
    {
        int n = s.size();
        string upper = "";
        string lower = "";
        
        for(char c : s){
            if(isupper(c)){
                upper += c;
            }
            else{
                lower += c;
            }
        }
        sort(upper.begin() , upper.end());
        sort(lower.begin() , lower.end());
        
        string result = "";
        auto u_count = upper.begin();
        auto l_count = lower.begin();
        
        while (u_count != upper.end() && l_count != lower.end()){
            result.push_back(*u_count++);
            result.push_back(*l_count++);
        }
        result.append(u_count, upper.end());
        result.append(l_count, lower.end());
        return result;
    }
};

//{ Driver Code Starts.
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.stringSort (s) << endl;
    }
}

// Contributes By: Pranay Bansal
// } Driver Code Ends