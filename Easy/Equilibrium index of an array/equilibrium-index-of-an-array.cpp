//{ Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
        int total_sum = 0;
        int l_sum = 0;
        
        for(int i = 0; i<n; i++){
            total_sum += A[i];
        }
        
        for(int i = 0; i<n; i++){
            int r_sum = total_sum - l_sum - A[i];
            
            if(l_sum == r_sum){
                return i;
            }
            l_sum += A[i];
        }
        return -1;
}