//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

/* Link list Node */
struct Node {
    int data;
    Node* next;

    Node(int x)
        : data(x)
        , next(NULL) {}
};

void append(Node*& head, Node*& tail, int new_data) {
    Node* new_node = new Node(new_data);
    if (head == NULL) {
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
}


// } Driver Code Ends
/* Link list Node

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

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */
class Solution {
  public:
    Node* deleteK(Node* head, int k) {
        if(head == NULL || k == 1){
            Node* temp = new Node(-1);
            return temp;
        }
        
        Node* prev = NULL;
        Node* current = head;
        int count = 1;
        
        while(current != NULL){
            if(count == k){
                count = 1;
                prev -> next = current -> next;
                delete current;
                current = prev -> next;
            }
            else{
                prev = current;
                current = current -> next;
                count++;
            }
        }
        
        return head;
    }
};


//{ Driver Code Starts.
/* Driver program to test above function */
int main() {

    int T;
    cin >> T;
    cin.ignore(); // To ignore the newline character after reading T

    while (T--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> arr;
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        Node* head = new Node(arr[0]);
        Node* tail = head;

        for (size_t i = 1; i < arr.size(); i++) {
            append(head, tail, arr[i]);
        }

        int K;
        cin >> K;
        cin.ignore(); // Ignore the newline after reading K

        Solution obj;
        Node* res = obj.deleteK(head, K);
        Node* temp = res;

        if (res == NULL) {
            cout << -1 << endl;
        } else {
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    return 0;
}

// } Driver Code Ends