//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:
    string stringFilter(string str) 
    { 
        string result = "";
        int n = str.size();
        
        for(int i = 0; i<n; i++){
            if(str[i] == 'b'){
                continue;
            }
            else if(str[i] == 'a' && str[i+1] == 'c' && i<n-1){
                i++;
                continue;
            }
            else{
                result += str[i];
            }
        }
        return result;
    } 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		
   		Solution ob;
   		cout <<ob.stringFilter(s) << "\n";

   		
   	}

    return 0;
}
// } Driver Code Ends