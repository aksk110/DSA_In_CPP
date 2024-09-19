#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    // constructor
    Node ( int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class doubly_linkedlist{
public:    
    Node* head;
    Node* tail;
    // constructor
     
     void display(Node*tail){
        Node*temp=tail;
        while(temp!=NULL){
            cout<<temp->val<<"  ";
            temp=temp->prev;
        }
     }
};
int main(){
    Node*a= new Node(10);
    Node*b= new Node(20);
    Node*c= new Node(30);
    Node*d= new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;

    d->prev=c;
    c->prev=b;
    b->prev=a;
    doubly_linkedlist l1;
    l1.display(d);
   
}