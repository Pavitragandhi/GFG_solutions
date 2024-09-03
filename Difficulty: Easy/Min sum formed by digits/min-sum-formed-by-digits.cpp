//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        if(n == 0){
            return 0;
        }
        else if(n == 1){
            return arr[0];
        }
        sort(arr , arr+n);
        long long int sum;
        string s1 = "";
        string s2 = "";
        
        
        for(int i = 0; i<n; i++){
            if(i%2 == 0){
                s1 += to_string(arr[i]);
            }
            else{
                s2 += to_string(arr[i]);
            }
        }
        
        sum = stol(s1) + stol(s2);
        return sum;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends