//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        int n = str1.size();
        
        if(n != str2.size()){
            return false;
        }
        
        if(str1 == str2){
            return false;
        }
        
        if(str1.size() < 3 || str2.size() < 3){
            return false;
        }
        string check = str1.substr(n-2 , 2) + str1 + str1.substr(0 , 2);
        
        return (check.find(str2) != string::npos);
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends