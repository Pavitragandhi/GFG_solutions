//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }

    int data = arr[0];
    Node* head = new Node(data);
    Node* tail = head;
    for (int i = 1; i < arr.size(); ++i) {
        data = arr[i];
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}

void printList(Node* n) {
    while (n) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}


// } Driver Code Ends
/*
// structure of the node is as follows

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
    struct Node* makeUnion(struct Node* head1, struct Node* head2) {
        map<int , int> store;
        Node* temp1 = head1;
        Node* temp2 = head2;
        
        while(temp1 != NULL && temp2 != NULL){
            store[temp1 -> data]++;
            store[temp2 -> data]++;
            
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        
        while(temp1 != NULL){
            store[temp1 -> data]++;
            temp1 = temp1 -> next;
        }
        
        while(temp2 != NULL){
            store[temp2 -> data]++;
            temp2 = temp2 -> next;
        }
        
        Node* dummy = new Node(0);
        Node* head = dummy;
        Node* line = dummy;
        
        for(auto temp : store){
            Node* new_node = new Node(temp.first);
            line -> next = new_node;
            line = new_node;
        }
        
        head = head -> next;
        return head;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        Node* first = buildList();

        Node* second = buildList();
        Solution obj;
        Node* head = obj.makeUnion(first, second);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends