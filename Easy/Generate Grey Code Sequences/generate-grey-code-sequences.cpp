//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Returns an array of all n-bit gray codes sequence.
You are required to complete below method. */
class Solution{
  public:
    vector <string> generateCode(int N)
    {
        vector<string> result;
        int totalSequences = pow(2, N);

        for(int i = 0; i < totalSequences; ++i){
            int greyCode = i ^ (i >> 1);

            bitset<32> binaryRepresentation(greyCode);
            result.push_back(binaryRepresentation.to_string().substr(32 - N));
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
		int n;
		cin>>n;
		Solution obj;
		vector <string> res = obj.generateCode(n);
		for (string i : res) cout << i << " ";
        cout<<endl;
	}
	return 0;
}


// } Driver Code Ends