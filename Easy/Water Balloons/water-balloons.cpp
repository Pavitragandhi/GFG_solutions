//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string sequence(string st){
        string result;
    
        int count = 0;
        char lastColor = '\0';
    
        for(char color : st){
            if(color == lastColor){
                count++;
            } 
            else{
                count = 1;
            }
            if(count <= 2){
                result.push_back(color);
                lastColor = color;
            }
        }
    return result;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string st;
        cin>>st;
        
        Solution ob;
        cout<<ob.sequence(st)<<endl;
    }
    return 0;
}
// } Driver Code Ends