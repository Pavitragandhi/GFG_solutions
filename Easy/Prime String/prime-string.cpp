//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    bool isPrimeString(int N, string str)
    {
    	int sum = 0;
    	
    	for(int i = 0; i<N; i++){
    	    sum += str[i];
    	}
    	
    	if(sum <= 1){
    	    return false;
    	}
    	for(int i = 2; i<sum; i++){
    	    if(sum%i == 0){
    	        return false;
    	    }
    	}
    	return true;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string str;
        int n;
        cin>>n>>str;
        Solution ob;
        if (ob.isPrimeString(n, str))
            cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
    }
	return 0;
}


// } Driver Code Ends