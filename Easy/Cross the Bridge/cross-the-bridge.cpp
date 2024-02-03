//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
    int findDays(string S){
        int n = S.size();
        int days = 0;
        int check = 0;
        int count = 0;
        
        for(int i = 0; i<n; i++){
            if(S[i] == '.'){
                count++;
            }
            else{
                if(count > check){
                    days++;
                    check = count;
                }
                count = 0;
            }
        }
        return days;
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
        cout << ob.findDays(s) << endl;
    }
    return 0; 
}
// } Driver Code Ends