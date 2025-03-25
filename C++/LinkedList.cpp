#include <iostream>

using namespace std;

class Node{
    private :
    public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
        }

};

void LinkedList(Node *head){
    Node* temp=  head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL";
    }


int main(){
    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);

    n1->next = n2;
    n2-> next = n3;

    LinkedList(n1);
}