#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;
    node * prev;

    node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = NULL;
    }
};

class DLL{
    public:
    node *head;
    node *tail;

    DLL(){
    head == NULL;
    tail == NULL;
    }

    void printF(node * head){
        node *temp = head;
        cout<<"DLL in forward"<<endl;
        while(temp){
            cout<<temp->data<<"->";
            temp= temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void printB(node *tail){
        node *temp = tail;
        cout<<"DLL In backward"<<endl;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->prev;
        }
        cout<<"NULL"<<endl;
    }

};

int main(){

    DLL l1;
    node *n1 = new node(10);
    node *n2 = new node(20);
    node *n3 = new node(30);
    node *n4 = new node(40);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    n4->prev = n3;
    n3->prev = n2;
    n2->prev = n1;


    l1.printF(n1);
    l1.printB(n4);


    return 0;   
}