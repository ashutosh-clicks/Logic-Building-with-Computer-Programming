#include <iostream>
using namespace std;

class Node{
   public:
   int data;
   Node* next;
   Node* prev;

   Node(int val){
      data = val;
      next = NULL;
      prev = NULL;
   }

};

void linkedList(Node* head){
   Node* temp =  head;

   while(head != NULL){
      cout<<temp->data<<"->";
      temp = temp->next;
   }
   cout<<"NULL"<<endl;

};

int main(){
   Node* head = new Node(10);
   Node *second = new Node(20);
   Node* third = new Node(30);

   head->next = second;
   second->next = third;
   // third->prev = second;
   // second->prev = head
   
   linkedList(third);
   
}