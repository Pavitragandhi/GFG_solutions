//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends


class twoStacks {
  public:
    int arr[100];
    int top_1;
    int top_2;

    twoStacks() {
        top_1 = -1;
        top_2 = 100;
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        if(top_2 - top_1 > 1){
            top_1++;
            arr[top_1] = x;
        }
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        if(top_2 - top_1 > 1){
            top_2--;
            arr[top_2] = x;
        }
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        if(top_1 >= 0){
            int result = arr[top_1];
            top_1--;
            return result;
        }
        else{
            return -1;
        }
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
        if(top_2 < 100){
            int result = arr[top_2];
            top_2++;
            return result;
        }
        else{
            return -1;
        }
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    while (T--) {
        twoStacks *sq = new twoStacks();

        int Q;
        cin >> Q;
        while (Q--) {
            int stack_no;
            cin >> stack_no;
            int QueryType = 0;
            cin >> QueryType;

            if (QueryType == 1) {
                int a;
                cin >> a;
                if (stack_no == 1)
                    sq->push1(a);
                else if (stack_no == 2)
                    sq->push2(a);
            } else if (QueryType == 2) {
                if (stack_no == 1)
                    cout << sq->pop1() << " ";
                else if (stack_no == 2)
                    cout << sq->pop2() << " ";
            }
        }
        cout << endl;
    }
}

// } Driver Code Ends