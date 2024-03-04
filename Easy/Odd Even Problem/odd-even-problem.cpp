//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    string oddEven(string S) {
        int even_count = 0;
        int odd_count = 0;
        unordered_map<char , int> store;
        
        for(char c : S){
            store[c]++;
        }
        
        for(auto pair : store){
            int check = (pair.first - 'a') + 1;
            
            if(check%2 != 0 && pair.second%2 != 0){
                odd_count++;
            }
            else if(check%2 == 0 && pair.second%2 == 0){
                even_count++;
            }
        }
        
        if((odd_count + even_count)%2 == 0){
            return "EVEN";
        }
        else{
            return "ODD";
        }
    } 
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.oddEven(S) << endl;
    }
    return 0;
}

// } Driver Code Ends