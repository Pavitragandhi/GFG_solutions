//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool balancedNumber(string N)
	{
	    int n = floor(N.size()/2);
	    int balance = 0;
	    
	    for(int i = 0; i<N.size(); i++){
	        if(i<n){
	            balance += N[i] - '0';
	        }
	        else if(i>n){
	            balance -= N[i] - '0';
	        }
	    }
	    
	    if(balance == 0){
	        return true;
	    }
	    return false;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string N;
        cin>>N;
        Solution ob;
        cout<<ob.balancedNumber(N)<<endl;
    }
    return 0;
}

// } Driver Code Ends