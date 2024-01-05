//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int binaryPalin (long long int N)
	{
	    bitset<64> binaryrepresentation(N);
	    string s = binaryrepresentation.to_string();
	    s.erase(0, s.find_first_not_of('0'));
	    string r = s;
	    reverse(r.begin() , r.end());
	    
	    if(s == r){
	        return 1;
	    }
	    return 0;
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.binaryPalin (n) << endl;
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends