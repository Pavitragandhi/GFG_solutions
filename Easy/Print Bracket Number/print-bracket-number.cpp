//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	vector<int> bracketNumbers(string S)
	{
	    int count = 0;
	    vector<int> result;
	    stack<int> store;
	    
	    for(char c : S){
	        if(c == '('){
	            count++;
	            store.push(count);
	            result.push_back(count);
	        }
	        else if(c == ')'){
	            result.push_back(store.top());
	            store.pop();
	        }
	    }
	    return result;
	}
};

//{ Driver Code Starts.

int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	    Solution ob;

   		vector<int> ans = ob.bracketNumbers(s);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends