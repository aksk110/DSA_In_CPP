#include<iostream>
using namespace std;
class Node{
public:    
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

Node* Middle(Node*head){
    Node*ptr1=head; //slow
    Node*ptr2=head; // fast
//     while(ptr2->next!=NULL && ptr2->next->next!=NULL){
//         ptr1=ptr1->next;
//         ptr2=ptr2->next->next;
//     }
//     if(ptr2->next==NULL){
//         return ptr1;
//     }
//     else return ptr1->next;

       while(ptr2!=NULL && ptr2->next!=NULL){
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
    }
        return ptr1;
    
}

int main(){
     Node* a=new Node(10);
     Node* b=new Node(20);
     Node* c=new Node(30);
     Node* d=new Node(40);
     Node* e=new Node(100);
    //  Node* f=new Node(100);
     a->next=b;
     b->next=c;
     c->next=d;
     d->next=e;
    //  e->next=f;
   Node*x=Middle(a);
   cout<<x->val;
}