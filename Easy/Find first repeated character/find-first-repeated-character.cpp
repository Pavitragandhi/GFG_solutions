//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    unordered_set<char> store;
    string result = "";
    bool check = false;
    
    for(char c : s){
        if(store.find(c) == store.end()){
            store.insert(c);
        }
        else{
            check = true;
            result += c;
            break;
        }
    }
    
    if(check){
        return result;
    }
    return "-1";
}