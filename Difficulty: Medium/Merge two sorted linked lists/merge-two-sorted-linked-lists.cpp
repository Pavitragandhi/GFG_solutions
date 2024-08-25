//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << ' ';
        temp = temp->next;
    }
    cout << '\n';
}


// } Driver Code Ends


/* Link list Node
struct Node {
  int data;
  struct Node *next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
// Function to merge two sorted linked list.
class Solution {
  public:
    Node* Sort(Node* first, Node* second){
        Node* prev_1 = first;
        Node* current_1 = first -> next;
        Node* current_2 = second;
        Node* check = second;
        
        while(current_1 != NULL && current_2 != NULL){
            if(current_2 -> data >= prev_1 -> data && current_2 -> data <= current_1 -> data){
                check = current_2 -> next;
                current_2 -> next = current_1;
                prev_1 -> next = current_2;
                prev_1 = current_2;
                current_2 = check;
            }
            else{
                prev_1 = current_1;
                current_1 = current_1 -> next;
                
                if(current_1 == NULL){
                    prev_1 -> next = current_2;
                    return first;
                }
            }
        }
        return first;
    }
    
    Node* sortedMerge(Node* head1, Node* head2) {
        if(head1 == NULL){
            return head2;
        }
        
        if(head2 == NULL){
            return head1;
        }
        
        if(head1 -> data <= head2 -> data){
            Node* result = Sort(head1 , head2);
            return result;
        }
        else{
            Node* result = Sort(head2 , head1);
            return result;
        }
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n1, n2, tmp;
        Node *head1 = nullptr, *tail1 = nullptr;
        Node *head2 = nullptr, *tail2 = nullptr;
        string input1, input2;

        getline(cin, input1); // Read the entire line for the LL1 elements
        stringstream ss1(input1);
        while (ss1 >> tmp) {
            Node *new_node = new Node(tmp);
            if (head1 == nullptr) {
                head1 = new_node;
                tail1 = new_node;
            } else {
                tail1->next = new_node;
                tail1 = new_node;
            }
        }

        getline(cin, input2); // Read the entire line for the LL2 elements
        stringstream ss2(input2);
        while (ss2 >> tmp) {
            Node *new_node = new Node(tmp);
            if (head2 == nullptr) {
                head2 = new_node;
                tail2 = new_node;
            } else {
                tail2->next = new_node;
                tail2 = new_node;
            }
        }

        Solution obj;
        Node *head = obj.sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends