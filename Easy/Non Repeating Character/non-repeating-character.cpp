//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
        unordered_map<char , int> check;
        queue<char> store;
        
        for(char c : S){
            check[c]++;
            store.push(c);
        }
        
        while(!store.empty() && check[store.front()] > 1){
            store.pop();
        }
        
        if(store.empty()){
            return '$';
        }
        return store.front();
    }

};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}

// } Driver Code Ends