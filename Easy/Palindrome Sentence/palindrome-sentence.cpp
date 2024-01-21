//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    string sum = "";
	    
	    for(char c : s){
	        if(isalpha(c)){
	            sum += c;
	        }
	    }
	    
	    string reverse_s = sum;
	    reverse(reverse_s.begin() , reverse_s.end());
	    
	    if(reverse_s == sum){
	        return true;
	    }
	    return false;
	}
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.sentencePalindrome(str)<<endl;
    }
    return 0;
}  


// } Driver Code Ends