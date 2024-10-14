//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* divide(Node* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        
        vector<int> even;
        vector<int> odd;
        Node* temp = head;
        
        while(temp != NULL){
            if(temp -> data % 2 == 0){
                even.push_back(temp -> data);
            }
            else{
                odd.push_back(temp -> data);
            }
            
            temp = temp -> next;
        }
        
        int even_count = 0;
        int odd_count = 0;
        temp = head;
        
        while(temp != NULL){
            if(even_count < even.size()){
                temp -> data = even[even_count];
                even_count++;
            }
            else if(odd_count < odd.size() && even_count >= even.size()){
                temp -> data = odd[odd_count];
                odd_count++;
            }
            
            temp = temp -> next;
        }
        
        return head;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after the integer input
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty())
            continue;

        int data = arr[0];
        int N = arr.size();
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 1; i < N; ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        Node *ans = ob.divide(head);
        printList(ans);
    }
    return 0;
}

// } Driver Code Ends