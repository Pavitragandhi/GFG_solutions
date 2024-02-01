//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int minEnergy(int a[], int n)
    {
        int result = 0;
        int check = 0;
        
        for(int i = 0; i<n; i++){
            check += a[i];
            
            if(check <= 0){
                result += 1 - check;
                check = 1;
            }
        }
        
        if(result == 0){
            return 1;
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
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<< ob.minEnergy(a,n) <<endl;
	}
	return 0;
}
// } Driver Code Ends