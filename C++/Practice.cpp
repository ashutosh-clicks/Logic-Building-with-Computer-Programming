#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(){
        data = 0;
        next = NULL;
    }
    Node(int x){
        data = x;
        next = NULL;
    }
    void display(){
        cout<<"Data: "<<data<<endl<<"Next: "<<next;
    }

};

class LinkedList{
    Node *head;
    public:

    LinkedList(){
        head = NULL;
    }
    
    void InsertAtHead(int data){
        Node *newNode = new Node(data);

        if(head ==NULL){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    void display(){
        cout<<head;
    }



};



int main(){
    LinkedList l1;
    l1.InsertAtHead(10);
    l1.display();

    return 0;
}