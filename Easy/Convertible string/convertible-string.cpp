//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
		int EqualString(string s, string t)
		{
		    int n = s.size();
		    int m = t.size();
		    
		    string even_1 = "";
		    string even_2 = "";
		    string odd_1 = "";
		    string odd_2 = "";
		    
		    if(n != m){
		        return 0;
		    }
		    
		    for(int i = 0; i<n; i++){
		        if(i%2 == 0){
		            even_1 += s[i];
		            even_2 += t[i];
		        }
		        else{
		            odd_1 += s[i];
		            odd_2 += t[i];
		        }
		    }
		    
		    sort(even_1.begin() , even_1.end());
		    sort(even_2.begin() , even_2.end());
		    sort(odd_1.begin() , odd_1.end());
		    sort(odd_2.begin() , odd_2.end());
		    
		    if(even_1 == even_2 && odd_1 == odd_2){
		        return 1;
		    }
		    return 0;
		}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string s, t;
	    cin >> s >> t;
	    Solution ob;
	    int ans = ob.EqualString(s, t);
	    cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends