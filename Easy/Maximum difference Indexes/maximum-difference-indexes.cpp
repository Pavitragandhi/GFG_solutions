//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int maxDiffIndex(int A[], int N)
    {
        unordered_map<int , vector<int>> store;
        int result = 0;
        
        for(int i = 0; i<N; i++){
            store[A[i]].push_back(i);
        }
        
        for(auto pair : store){
            if(pair.second.size() >= 2){
                int p = pair.second.size();
                if(pair.second[p-1] - pair.second[0] > result){
                    result = pair.second[p-1] - pair.second[0];
                }
            }
        }
        return result;
    }
};

//{ Driver Code Starts.

int main()
 {
     ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         int a[n];
         for(int i=0;i<n;i++)
            cin>>a[i];
         Solution ob;
         cout<<ob.maxDiffIndex(a, n)<<"\n";
     }
	return 0;
}
// } Driver Code Ends