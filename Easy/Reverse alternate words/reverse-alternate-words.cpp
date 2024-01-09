//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string reverseAlternate(string str)
{
    istringstream s(str);
    string read;
    string result = "";
    int i = 0;
    
    while(s >> read){
        if(i%2 != 0){
            reverse(read.begin() , read.end());
            result += read + " ";
        }
        else{
            result += read + " ";
        }
        i++;
    }
    return result;
}
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution ob;
        cout<<ob.reverseAlternate(str)<<endl;
    }
    return 0;
}

// } Driver Code Ends