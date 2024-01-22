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
    int totalTime(int n, vector<int> &arr, vector<int> &penalty) {
         int total_time = 0;
         unordered_set<int> store;
         store.insert(arr[0]);
         
         for(int i = 1; i<n; i++){
             if(store.find(arr[i]) == store.end()){
                 total_time++;
                 store.insert(arr[i]);
             }
             else{
                 total_time += penalty[arr[i] - 1];
             }
         }
         return total_time;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        
        vector<int> penalty(n);
        Array::input(penalty,n);
        
        Solution obj;
        int res = obj.totalTime(n, arr, penalty);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends