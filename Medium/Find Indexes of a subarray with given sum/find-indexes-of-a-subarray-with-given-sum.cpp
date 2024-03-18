//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int left = 0;
        int right = 0;
        long long sum = arr[0];
        vector<int> result;
        
        while(right < n && left <= right){
            if(sum == s){
                result.push_back(left+1);
                result.push_back(right+1);
                break;
            }
            else if(sum < s){
                right++;
                if(right < n){
                    sum += arr[right];
                }
            }
            else{
                sum -= arr[left];
                left++;
                if(left > right){
                    right = left;
                    if(right < n){
                        sum = arr[right];
                    }
                }
            }
        }
        
        if(result.empty()){
            result.push_back(-1);
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
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends