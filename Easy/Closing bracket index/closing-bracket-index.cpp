//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int closing (string s, int pos)
        {
            int count = 0;
            for(int i = pos + 1; i<s.size(); i++){
                if(s[i] == '['){
                    count++;
                }
                else if(s[i] == ']') {
                    if(count == 0){
                        return i;
                    }
                    else{
                        count--;
                    }
                }
            }
            return -1;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int pos; cin >> pos;
        Solution ob;
		cout <<ob.closing (s, pos) << '\n';
	}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends