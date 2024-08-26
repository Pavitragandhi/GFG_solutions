//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void Solve(stack<int>& s, int count , int check){
        if(count == check){
            s.pop();
            return;
        }
        
        int num = s.top();
        s.pop();
        
        Solve(s , count+1 , check);
        
        s.push(num);
    }
    
    void deleteMid(stack<int>& s, int sizeOfStack) {
        int count = 0;
        int check = 0;
        
        if(sizeOfStack % 2 == 0){
            check = sizeOfStack/2;
        }
        else{
            check = ((sizeOfStack + 1)/2) - 1;
        }
        Solve(s , count , check);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int sizeOfStack;
        cin >> sizeOfStack;

        stack<int> myStack;

        for (int i = 0; i < sizeOfStack; i++) {
            int x;
            cin >> x;
            myStack.push(x);
        }

        Solution ob;
        ob.deleteMid(myStack, myStack.size());
        while (!myStack.empty()) {
            cout << myStack.top() << " ";
            myStack.pop();
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends