//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int findLastOccurence(string A,string B){
        int n = A.size();
        int m = B.size();
        int result = -1;
        
        for(int i = 0; i<n-m+1; i++){
            string sub = A.substr(i , m);
            if(sub == B){
                result = i+1;
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
        string A,B;
        cin>>A>>B;
        Solution ob;
        cout<<ob.findLastOccurence(A,B)<<"\n";
        
    } 
    return 0; 
}
// } Driver Code Ends