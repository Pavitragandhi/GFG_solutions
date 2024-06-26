//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        string upper = "";
        string lower = "";
        
        for(int i = 0; i<n; i++){
            if(isupper(str[i])){
                upper += str[i];
            }
            else{
                lower += str[i];
            }
        }
        sort(upper.begin() , upper.end());
        sort(lower.begin() , lower.end());
        
        int u_count = 0;
        int l_count = 0;
        string result ="";
        
        for(int i = 0; i<n; i++){
            if(isupper(str[i])){
                result += upper[u_count];
                u_count++;
            }
            else{
                result += lower[l_count];
                l_count++;
            }
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
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends