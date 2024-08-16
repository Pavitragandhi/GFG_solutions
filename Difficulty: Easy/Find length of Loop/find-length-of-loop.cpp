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

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

void loopHere(Node *head, Node *tail, int position) {
    if (position == 0)
        return;

    Node *walk = head;
    for (int i = 1; i < position; i++)
        walk = walk->next;
    tail->next = walk;
}


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    Node* detect_loop(Node* head){
        Node* slow = head;
        Node* fast = head;
        
        while(slow != NULL && fast != NULL){
            fast = fast -> next;
            if(fast != NULL){
                fast = fast -> next;
            }
            
            slow = slow -> next;
            
            if(slow == fast){
                return fast;
            }
        }
        return fast;
    }
    
    Node* loop_start(Node* head , Node* check){
        Node* start = head;
        Node* intersection = check;
        
        while(start != intersection){
            start = start -> next;
            intersection = intersection -> next;
        }
        
        return start;
    }
    
    int countNodesinLoop(struct Node *head) {
        int count = 1;
        
        if(head == NULL || head -> next == NULL){
            return 0;
        }
        
        Node* check = detect_loop(head);
        
        if(check == NULL){
            return 0;
        }
        
        Node * loop_start_node = loop_start(head , check);
        Node* check_2 = loop_start_node;
        
        while(check_2 -> next != loop_start_node){
            check_2 = check_2 -> next;
            count++;
        }
        
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int k;
        cin >> k;
        cin.ignore();
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        loopHere(head, tail, k);

        Solution ob;
        cout << ob.countNodesinLoop(head) << endl;
    }
    return 0;
}

// } Driver Code Ends