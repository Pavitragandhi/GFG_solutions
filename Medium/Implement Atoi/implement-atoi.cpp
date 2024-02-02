//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        bool check = true;
        int n = s.size();
        int result = 0;
        int count = 0;
        
        for(int i = 0; i<n; i++){
            if(s[i] == '-' && i == 0){
                check = false;
                continue;
            }
            else{
                if(!isdigit(s[i])){
                    return -1;
                }
                else{
                    int convert = s[i] - '0';
                    result = result*10 + convert;
                    count++;
                }
            }
        }
        
        if(!check){
            return -result;
        }
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends