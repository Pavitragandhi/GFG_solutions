//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        long long l=0;
        long long r=v.size()-1;
        pair<long,long>result;
        long long i = -1;
        long long j = -1;
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(v[mid]==x){
                i=mid;
                r=mid-1;
            }
            else if(v[mid]<x){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
            
        }
        l=0;
        r=v.size()-1;
        
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(v[mid]==x){
                j=mid;
                l=mid+1;
            }
            else if(v[mid]<x){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
            
        }
        result={i,j};
        return result;
        
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends