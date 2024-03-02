//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int minSubset(vector<int> &Arr,int N){
        sort(Arr.begin() , Arr.end() , greater<int>());
        long long int total_sum = 0;
        long long int count = 0;
        long long int sum = 0;
        
        for(int i = 0; i<N; i++){
            total_sum += Arr[i];
        }
        
        for(int i = 0; i<N; i++){
            sum += Arr[i];
            total_sum -= Arr[i];
            count++;
            
            if(sum > total_sum){
                break;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> Arr(N);
        for(int i=0;i<N;i++){
            cin>>Arr[i];
        }
        Solution ob;
        cout<<ob.minSubset(Arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends