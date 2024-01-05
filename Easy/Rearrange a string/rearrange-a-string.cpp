//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string arrangeString(string str)
    {
        int sum = 0;
        string s = "";
        for(char c : str){
            if(isalpha(c)){
                s += c;
            }
            else{
                sum += c - '0';
            }
        }
        sort(s.begin() , s.end());
        if(sum == 0){
            return s;
        }
        else{
            s += to_string(sum);
        }
        return s;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.arrangeString(s) << endl;
    }
return 0;
}


// } Driver Code Ends