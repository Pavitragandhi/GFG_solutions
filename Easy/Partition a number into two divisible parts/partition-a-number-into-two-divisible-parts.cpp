//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string stringPartition(string S, int a, int b){
        int n = S.size();
        string join = "";
        
        for(int i = 0; i<n; i++){
            if(i == n-1){
                break;
            }
            join += S[i];
            if(stoi(join)%a == 0){
                string remain = S.substr(i+1 , n-i);
                if(stoi(remain)%b == 0){
                    return join + " " + remain;
                }
            }
        }
        return "-1";
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {   
        int a,b;
        string S;
        cin >> S >> a >> b;
        Solution ob;
        cout << ob.stringPartition(S,a,b) << endl;
    }
    return 0; 
} 
// } Driver Code Ends