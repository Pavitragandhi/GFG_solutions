//{ Driver Code Starts



#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long int unique_substring_sum(string s, int k)
		{
		    unordered_set<string> store;
		    int n = s.size();
		    string store_2 = "";
		    
		    if(n%k != 0){
		        return -1;
		    }
		    
		    for(int i = 0; i<n; i+=k){
		        store_2 = s.substr(i , k);
		        store.insert(store_2);
		    }
		    
		    int result = 0;
		    
		    for(string p : store){
		        int check = bitset<64> (p).to_ulong();
		        result += check;
		    }
		    return result;
		}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string s;
    	int k;
    	cin >> s >> k;
        Solution ob;
    	long int ans  = ob.unique_substring_sum(s, k);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends