//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string amendSentence (string s)
    {
        int n = s.size();
        string result = "";
        
        for(int i = 0; i<n; i++){
            if(i == 0){
                result += tolower(s[i]);
            }
            else if(isupper(s[i])){
                result += " ";
                result += tolower(s[i]);
            }
            else{
                result += s[i];
            }
        }
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.amendSentence (s) << endl;
	}
}
// } Driver Code Ends