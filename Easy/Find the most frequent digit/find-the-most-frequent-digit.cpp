//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int solve(string s);
int main()
{
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        string s;
        cin>>s;
        cout<<solve(s)<<endl;
        
    }
}
// } Driver Code Ends



int solve(string N)
{
    map<int , int> store;
    
    for(char c : N){
        int check = c - '0';
        store[check]++;
    }
    
    int result = 0;
    int maximum = INT_MIN;
    
    for(auto pair : store){
        if(maximum <= pair.second){
            result = pair.first;
            maximum = pair.second;
        }
    }
    return result;
}
