//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int findMagicalNumber(int N, vector<int> &arr) {
        int start = 0;
        int end = N;
        
        int mid = start + (end - start)/2;
        int result = -1;
        
        while(start <= end){
            if(arr[mid] == mid){
                result = mid;
                end = mid - 1;
            }
            else if(arr[mid] < mid){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            
            mid = start + (end - start)/2;
        }
        return result;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> arr(N);
        Array::input(arr,N);
        
        Solution obj;
        int res = obj.findMagicalNumber(N, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends