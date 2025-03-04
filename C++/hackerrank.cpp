#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {  // Constructor to initialize node
        data = val;
        next = NULL;
    }
};

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Creating nodes
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    // Linking nodes
    head->next = second;
    second->next = third;

    // Print list
    printList(head);

    return 0;
}
