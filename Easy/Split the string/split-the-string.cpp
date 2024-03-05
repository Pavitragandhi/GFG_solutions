//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{   
public:
    int isPossible(string S){
        int n = S.size();
        unordered_set<string> store;
        
        if(n < 4){
            return false;
        }
        
        for(int i = 1; i<n; i++){
            for(int j = i+1; j<n; j++){
                for(int k = j+1; k<n; k++){
                    string one = S.substr(0 , i);
                    string two = S.substr(i , j-i);
                    string three = S.substr(j , k-j);
                    string four = S.substr(k);
                    
                    if(store.insert(one).second &&
                    store.insert(two).second &&
                    store.insert(three).second &&
                    store.insert(four).second){
                        return true;
                    }
                    
                    store.clear();
                }
            }
        }
        return false;
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
        cout<<ob.isPossible(s)<<"\n";
    }
    return 0; 
}
// } Driver Code Ends