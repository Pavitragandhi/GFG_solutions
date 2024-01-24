//{ Driver Code Starts
#include<bits/stdc++.h>
#define br char xx; cin>>xx; cout<<xx<<endl;
#define lli long long int
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of characters which Ishaan must insert  
    //such that string doesn't have three consecutive same characters.
    int modified (string a)
    {
        int n = a.size();
        int count = 0;
        int result = 0;
        
        for(int i = 0; i<n-1; i++){
            if(a[i] == a[i+1]){
                count++;
            }
            else{
                count = 0;
            }
            
            if(count == 2){
                result++;
                count = 0;
            }
        }
        return result;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        Solution obj;
        cout<<obj.modified(a)<<endl;
    }
    return 0;
}

// } Driver Code Ends