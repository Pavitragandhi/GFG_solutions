//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int> store(n);
        int neg_count = 0;
        
        for(int i = 0; i<n; i++){
            store[i] = arr[i];
            if(arr[i] < 0){
                neg_count++;
            }
        }
        
        int pov = 0;
        int neg = n - neg_count;
        
        for(int i = 0; i<n; i++){
            if(store[i] < 0){
                arr[neg] = store[i];
                neg++;
            }
            else{
                arr[pov] = store[i];
                pov++;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
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
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends