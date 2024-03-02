//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
           int result = INT_MAX;
           int sum = 0;
           int count = 0;
           
           for(int i = 0; i<n; i++){
               sum += arr[i];
               
               while(sum > x && count <= i){
                   result = min(result , i-count+1);
                   sum -= arr[count];
                   count++;
               }
           }
           
           if(result == INT_MAX){
               return 0;
           }
           return result;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends