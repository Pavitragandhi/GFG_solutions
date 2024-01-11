//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find the minimum indexed character.
    int minIndexChar(string str, string patt)
    {
        int minimum = INT_MAX;
        
        for(int i = 0; i<str.size(); i++){
            if(patt.find(str[i]) != string::npos){
                minimum = min(minimum , i);
            }
        }
        
        if(minimum == INT_MAX){
            return -1;
        }
        return minimum;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        string str;
        string patt;
        cin>>str;
        cin>>patt;
        Solution obj;
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
	return 0;
}

// } Driver Code Ends