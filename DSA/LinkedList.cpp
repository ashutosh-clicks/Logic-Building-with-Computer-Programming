#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node *prev;

    Node(){
        data = 0;
        next = NULL;
    }
    Node(int a){
        data  = a;
        next = NULL;
    }

};

void printForward(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;

    }
    cout<<"NULL";
}


Node* insertAtBegin(Node *head, int newData){

    Node* newNode = new Node(newData); // Create new node
    newNode->next = head;             // Point the new node to the current head
    return newNode;


}

Node *insertAtEnd(Node * head,int newData){
    Node* newNode = new Node(newData);
    if(head == NULL){
        return newNode;
    }
    Node* temp = head;
    while (temp->next != nullptr) { // Traverse to the last node
        temp = temp->next;
    }
    temp->next = newNode; // Update the last node's next pointer
    return head;          // Return the original head

}

Node* insertAtValue(Node* head, int newData, int value){
    Node *temp = head;
    while(temp!= NULL){
        if(temp->data!=value){
            temp = temp->next;
        }
        else{
            temp->data = newData;
        }

    }
    return head;

}

Node* insertBeforeValue(Node *head, int newData, int value){
    Node* temp = head;
    Node* tempest = temp->next;
    // Node* newNode = new Node(newData);
    while(temp!=NULL){
        if(tempest->data == value){
            temp->data = newData;
            temp = temp->next;
        }
        else{
            temp = temp->next;
        }

    }
    return head;

}


int main(){
    //Linked lIst
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(50);
    
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    
    Node *head = n1;

    //Linkd List
    head = insertAtBegin(head,100);
    // head = insertAtEnd(head,200);
    // head = insertAtValue(head,300,50);
    // head = insertAtValue(head, 400, 40);
    head = insertBeforeValue(head,500,30);
    printForward(head);



    return 0;
}