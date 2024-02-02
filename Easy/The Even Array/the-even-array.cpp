//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    int convertToEven(string s)
    {
        int count = 0;
        int n = s.size();
        
        for(int i = 0; i<n; i++){
            if(s[i] == 'O'){
                count++;
                
                while(i+1<n && s[i+1] == 'O'){
                    i++;
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
        Solution ob;
   		cout << ob.convertToEven(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends