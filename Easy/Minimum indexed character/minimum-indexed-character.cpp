//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
	string printMinIndexChar(string S, string patt)
	{
	    int n = S.size();
	    string result = "";
	    
	    for(int i = 0; i<n; i++){
	        if(patt.find(S[i]) != string::npos){
	            result = S[i];
	            break;
	        }
	    }
	    
	    if(result.empty()){
	        return "$";
	    }
	    return result;
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        string patt;
        cin >> patt;
        Solution obj;
        cout<<obj.printMinIndexChar(str, patt)<<endl;
    }
    
	return 0;
}
// } Driver Code Ends