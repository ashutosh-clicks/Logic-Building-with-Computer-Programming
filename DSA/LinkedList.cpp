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
        prev = NULL;
    }
    Node(int a){
        data  = a;
        next = NULL;
        prev = NULL;
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

Node* insertAtBegin(Node*head,int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    return newNode;
}


Node* insertAtEnd(Node* head, int data){
    Node* newNode = new Node(data);
    Node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

Node* insertAtPosition(Node* head, int pos, int data){
    Node* temp = head;
    for(int i = 1; i<pos-1;i++){
        temp = temp->next;
    }
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

Node* reverse(Node* head){
    Node* temp = head;
    Node* next = NULL;
    Node* prev = NULL;
    while(temp!=NULL){
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    return prev;
}

Node* insertBeforePosition(Node* head,int pos,int value){
    Node* temp  = head;
    if(pos==0){
        insertAtBegin(head,value);
        return head;
    }
    else{
        for(int i = 1;i<pos-2;i++){
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
        return head;
    }

}

void printBackward(Node* tail){
    Node* temp = tail;
    while(temp != NULL){
        cout<<temp->data<<"<-";
        temp = temp->prev;
    }
    cout<<"NULL";

}

void centerElement(Node* head){
    Node* f,*s;
    f = s = head;
    while(f and f->next){
        s = s->next;
        f = f->next->next;
    }
    cout<<s->data<<endl;
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

    n5->prev = n4;
    n4->prev = n3;
    n3->prev = n2;
    n2->prev = n1;
    
    Node* tail = n5;
    Node *head = n1;

    //Linkd List
    head = insertAtBegin(head,100);
    head = insertAtEnd(head,200);
    head = insertAtPosition(head,2,300);
    head = insertBeforePosition(head,2,400);
    // head = reverse(head);
    centerElement(head);
    printForward(head);
    // printBackward(tail);

    
    return 0;
}