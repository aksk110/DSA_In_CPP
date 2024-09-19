#include<iostream>
using namespace std;
class Node {
public:
       int val;
       Node*next;
       Node(int val){
        this->val=val;
        this->next=NULL;
       }
};   
 void display(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
 }
 int size(Node*x){
    Node*temp=x;
    int count=0;
     while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
 } // insertion hoti h apki 
 void insertAtEnd(int val,Node*head){
   Node*t=new Node(val);
   Node*temp=head;
   while(temp->next!=NULL){
      temp=temp->next; // yaha se apka tail nikla 
   }
   temp->next=t; // temp->next ==tail
 }
int main(){
     Node* a=new Node(10);
     Node* b=new Node(20);
     Node* c=new Node(30);
     Node* d=new Node(40);
     Node* e=new Node(100);
     a->next=b;
     b->next=c;
     c->next=d;
     d->next=e; 
     display(a);
     cout<<endl;
     cout<<size(a)<<endl;
     insertAtEnd(50,a);
     display(a);
     cout<<size(a)<<endl;
    //  Node* temp=a;
    //  while(temp!=NULL){
    //     cout<<temp->val<<"  ";
    //     temp=temp->next;
    //  }
}  
