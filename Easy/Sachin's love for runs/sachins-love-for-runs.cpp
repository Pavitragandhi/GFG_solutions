//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int compute( int a[], int n)
    {
        int max_score = INT_MIN;
        int count = 0;
        
        for(int i = 0; i<n-1; i++){
            if(a[i] <= a[i+1]){
                count++;
            }
            else{
                max_score =  max(max_score , count);
                count = 0;
            }
        }
        
        max_score = max(max_score , count);
        return max_score+1;
    }
};

//{ Driver Code Starts.
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
         int n, i;
         cin>>n;
         int a[n+5];
         for(i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.compute(a, n)<<endl;
         
     }
	
	return 0;
}
// } Driver Code Ends