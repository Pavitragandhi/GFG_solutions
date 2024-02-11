//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        int check = sum;
        string result = "";
        int add = 0;
        
        for(int i = 0; i<n; i++){
            if(check >= 9){
                result += '9';
                check -= 9;
                add += 9;
            }
            else{
                result += '0' + check;
                add += check;
                check -= check;
            }
        }
        
        if(add != sum){
            return "-1";
        }
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}
// } Driver Code Ends