//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S)
    {
        int n = S.size();
        int result = 0;
        int l_check , u_check;
        
        for(int i = 0; i<n; i++){
            l_check = 0;
            u_check = 0;
            for(int j = i; j<n; j++){
                if(islower(S[j])){
                    l_check++;
                }
                else{
                    u_check++;
                }
                if(l_check == u_check){
                    result++;
                }
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
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends